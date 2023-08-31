/*
 * File: extendSize.c
 * Author: Karim Hany Abogharbia
 * Description: extends array size once it reaches full capacity
 * Date: [14/8/2023]
 */

#include "headers.h"
#include <stdio.h>
#include <string.h>
/* the following function works by rewriting the main array into a temp array
and then redeclaring the main array with a larger size then copying the contents of the temp array back
into the main array*/
void extendSize() {
  struct job temp[size];
  for (int j = 0; j < size; j++) {
    for (int z = 0; z < strlen(task[j].description)+1; z++) {
      temp[j].description[z] = task[j].description[z];
    }

    temp[j].id = task[j].id;

    temp[j].complete = task[j].complete;
  }
  size += 10;
  struct job task[size];
  for (int j = 0; j < size; j++) {
    for (int z = 0; z < strlen(temp[j].description)+1; z++) {
      task[j].description[z] = temp[j].description[z];
    }

    task[j].id = temp[j].id;

    task[j].complete = temp[j].complete;
  }
}
