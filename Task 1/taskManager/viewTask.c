/*
 * File: viewTask.c
 * Author: Karim Hany Abogharbia
 * Description: allows user to view tasks
 * Date: [14/8/2023]
 */

#include "headers.h"
#include <stdio.h>

void viewTask() {
  if (last == 0) {
    printf("No tasks to view!\n\n");
  } else {

    printf("\nCurrent Tasks:\n");
    for (int z = 0; z < last; z++) {
      printf("Task ID: %d\n", z + 1);
      printf("Description: %s\n", task[z].description);
      if (task[z].complete == 1) {
        printf("Complete!\n\n");
      } else if (task[z].complete == 0) {
        printf("Not Complete!\n\n");
      }
    }
  }
}
