/*   File:  add.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program uses a function to add 2 numbers
int main() {
  int number1;
  int number2;
  
  printf("Please enter in the first number:\n");
  scanf("%d", &number1);
  printf("Please enter in the second number:\n");
  scanf("%d", &number2);

  printf ("The sum of your two numbers is: %d\n", add(number1, number2));
  
  return 0;
}