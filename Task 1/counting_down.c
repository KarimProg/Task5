/*
 * File: main.c
 * Author: Karim Hany Abogharbia
 * Description: asks user for input to countdown from with timer 1 sec between each number
 * Date: [14/8/2023]
 */


/* Header Files */
#include <stdio.h>
#include <time.h>

int main(void) {

  int input;

  printf("Enter number to start countdown from: ");

  scanf("%d", &input);

  for (input; input > 0; input--) {
    printf("%d\n", input);
    sleep(1);
  }

  printf("Blast off to the moon!");

  return 0;
}
