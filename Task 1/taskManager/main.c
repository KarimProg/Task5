/*
 * File: main.c
 * Author: Karim Hany Abogharbia
 * Description: task manager with functionalities such as marking completion and viewing tasks in table format
 * Date: [14/8/2023]
 */


/* Header Files */
#include "headers.h"
#include <stdio.h>
#include <string.h>

/* Main Function */
int main(void) {

  int choice = 1;

  //options are displayed for user
  printf("\nMinions Task Manager\n");
  printf("1. Add Task\n");
  printf("2. View Table\n");
  printf("3. View Tasks\n");
  printf("4. Remove Task\n");
  printf("5. Update Completion\n");
  printf("6. Exit\n\n");

  //looping of whole program
  while (1) {
        //used to check if array is at it limit, if so array size is enlarged
    if (last == size) {
      extendSize();
    }

    printf("Select an option: ");
//takes user input
    do {
      if (choice < 1 || choice > 6) {
        printf("Wrong number, try again: ");
      }
      scanf("%d", &choice);

    } while (choice < 1 || choice > 6);
//depending on the user's choice one of the following functions is called
    switch (choice) {
    case 1:
      addTask();
      break;

    case 2:
      viewTable();
      break;

      case 3:
      viewTask();
      break;

    case 4:
      removeTask();
      break;

      case 5:
        completeTask();
      break;

    case 6:
      printf("Exiting Minions Task Manager. Have a great day!");
      return 0;
    }
  }
  return 0;
}
