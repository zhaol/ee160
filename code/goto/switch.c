/*   File:  switch.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  
  if (number == 1) {
    goto one;
  } else if (number == 2) {
    goto two;
  } else if (number == 3) {
    goto three;
  }
  
  one: printf("You've entered 1\n");
  return 0;
  two: printf("You've entered 2\n");
  return 0;
  three: printf("You've entered 3\n");
  return 0;
}  