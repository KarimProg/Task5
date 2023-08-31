/*
 * File: Kalman Missle
 * Author: Karim Hany Abogharbia
 * Description: using kalman filter it fuses 2 sensors and then further improves readings using real world physics
 * Date: [14/8/2023]
 */


/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* Main Function */
int main()
{
    float mpu[10] = {0.0, 11.68, 18.95, 23.56, 25.72, 25.38, 22.65, 18.01, 10.14, -0.26};
    float bno[10]   = {0.0, 9.49, 16.36, 21.2, 23.16, 22.8, 19.5, 14.85, 6.79, -2.69};
    float projectile[10];
    float best[10];
    float best2[10];
    int initVel = 30, initAng = 46;
    float errm=0.22,errb=0.08, kg;
//formula to calculate position of missle according to laws of motion
    for(int t=0; t<10; t++)
        projectile[t] = projectileEqn(initVel, initAng, t);

//kalman gain is calculated
    kg=errm /(errb+errm);

//kalman filter to fuse 2 sensors
    for(int j=0;j<10;j++){
    errm=(1-kg)*errm;

    kg=errm /(errb+errm);
    for(int i=0; i<10; i++)
    {

        best[i]=mpu[i==0?0:i-1]+kg*(bno[i]-mpu[i==0?0:i-1]);



    }

    }



    printf("\n");

//kalman filter between fused sensors and projectile laws of motion
    for(int j=0;j<10;j++){
    errm=(1-kg)*errm;

    kg=errm /(0.5+errm);

    for(int i=0; i<10; i++)
    {

        best2[i]=projectile[i==0?0:i-1]+kg*(best[i]-projectile[i==0?0:i-1]);



    }
    }

    //result is printed
for(int i=0; i<10; i++){
    printf("%f\n",best2[i]);
}


    return 0;
}


