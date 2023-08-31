/*
 * File: completeTask.c
 * Author: Karim Hany Abogharbia
 * Description: allows user to mark completion/incompletion of a task
 * Date: [14/8/2023]
 */

#include "headers.h"
#include <stdio.h>

void completeTask()
{
    int id=2;
    char mark;


    if (last == 0)
    {
        printf("No tasks to update!\n\n");
    }
    else
    {
        printf("Which task is complete/incomplete: ");
        do
        {

            if (id < 1 || id > last)
            {
                printf("Wrong id, try again: ");
            }
            scanf("%d", &id);
        }
        while (id < 1 || id > last);

        printf("Is it complete?(y/n) ");


            scanf("\n");
            scanf("%c", &mark);

        printf("\n");

        if (mark == 'Y' || mark == 'y')
            task[id - 1].complete = 1;
        else
            task[id - 1].complete = 0;
    }
}
