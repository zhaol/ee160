/*   File:  add_now.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program uses a function to increment 2 numbers
int main() {
  int number1;
  int number2;
  
  printf("Please enter in the first number:\n");
  scanf("%d", &number1);
  printf("Please enter in the second number:\n");
  scanf("%d", &number2);

  add_now(&number1, &number2);
  printf("The first number is now: %d\n", number1);
  printf("The second number is now: %d\n", number2);
  
  return 0;
}