/*
 * File: addTask.c
 * Author: Karim Hany Abogharbia
 * Description: allows user to add a task
 * Date: [14/8/2023]
 */

#include "headers.h"
#include <stdio.h>
#include <string.h>

void addTask() {
  printf("\nMax size is 100 characters");
  printf("\nEnter task description: ");

  scanf("\n");
  scanf("%100[^\n]%*c", task[last].description);

  task[last].id = last + 1;
  task[last].complete = 0;

  last++;

  printf("Task added successfully!\n\n");
}
