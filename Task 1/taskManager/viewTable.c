/*
 * File: viewTable.c
 * Author: Karim Hany Abogharbia
 * Description: allows user to view tasks in table format
 * Date: [14/8/2023]
 */
#include "headers.h"
#include <stdio.h>
#include <string.h>

void viewTable()
{
    if (last == 0)
    {
        printf("No tasks to view!\n\n");
    }
    else
    {

        printf("If table is wonky, please expand command console window...\n");

        printf(" ------------------------------------------------------------------------------------------------------------------------\n");
        printf("|  ID  |                                             Description                                            | Completion |\n");
        printf(" ------------------------------------------------------------------------------------------------------------------------\n");


        for(int i=0; i<last; i++)
        {

            if(task[i].complete==1)
                printf("|%3d   |%100s|    Done!   |\n",task[i].id,task[i].description);

            else
                printf("|%3d   |%100s|  Not Done! |\n",task[i].id,task[i].description);



        }

        printf(" ------------------------------------------------------------------------------------------------------------------------\n");
    }
}
