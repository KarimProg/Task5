/*
 * File: removeTask.c
 * Author: Karim Hany Abogharbia
 * Description: allows user to remove a task
 * Date: [14/8/2023]
 */
#include "headers.h"
#include <stdio.h>

void removeTask() {
  if (last == 0) {
    printf("No task to remove!\n\n");
  } else {

    int removed = 1;
    struct job temp[size];

    printf("Enter task ID to remove: ");
    do {
      if (removed < 1 || removed > last) {
        printf("Wrong number, try again: ");
      }
      scanf("%d", &removed);
    } while (removed < 1 || removed > last);

    for (int j = 0, z = 0; j < last - 1; j++, z++) {
      if (j == removed - 1) {
        j++;
      }
      for (int c = 0; c < strlen(task[j].description) + 1; c++) {
        temp[z].description[c] = task[j].description[c];
      }
    }

    for (int j = 0; j < last - 1; j++) {
      for (int c = 0; c < strlen(task[j].description) + 1; c++) {
        task[j].description[c] = temp[j].description[c];
      }
    }
    last--;

    printf("Task successfully removed!\n\n");
  }
}
