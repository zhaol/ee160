/*   File:  backward_array.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
  int array[SIZE] = {0, 1, 2, 3, 4, 5};
  int* array_pointer = &array[SIZE - 1];
  
  int count = SIZE;
  while (count > 0) {
    printf("*array_pointer: %d\n", *(array_pointer--));
    count--;
  }
  
  return 0;
}