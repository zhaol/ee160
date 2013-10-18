/*   File:  arrays_are_pointers.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program prints an array backwards
int main () {
  int array[] = {0, 1, 2, 3, 4, 5};
  
  printf("array: %p\n", array);
  printf("&array[0]: %p\n", &array[0]);
  
  return 0;
}