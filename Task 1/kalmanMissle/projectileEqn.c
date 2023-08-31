/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"


float projectileEqn(int vi, int alpha, int t)
{

    float y, angle, time = t;

    angle = sin(alpha*3.141592/180);
    time/=2.0;

    y = vi* angle * time - ( 0.5 * 9.81 * time * time);


    return y;
}
