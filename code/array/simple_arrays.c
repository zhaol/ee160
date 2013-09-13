/*   File:  simple_arrays.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

/*  This program stores declares, initializes, and uses simple arrays */
main() {
  int list_of_values[3];
  list_of_values[0] = 1;
  list_of_values[1] = 2;
  list_of_values[2] = 3;
  
  printf("list_of_values[0]: %d\n", list_of_values[0]);
  printf("list_of_values[1]: %d\n", list_of_values[1]);
  printf("list_of_values[2]: %d\n", list_of_values[2]);
  
  char string[] = "word ";
  
  printf("string[0]: %c\n", string[0]);
  printf("string[1]: %c\n", string[1]);
  printf("string[2]: %c\n", string[2]);
  printf("string[3]: %c\n", string[3]);
  printf("string[4]: @%c@\n", string[4]);
  printf("string[5]: @%c@\n", string[5]);
  printf("string[6]: @%c@\n", string[6]);
  printf("null character \0: @%c@\n", '\0');
  
  printf("(int)string[4]: @%i@\n", string[4]);
  printf("(int)string[5]: @%i@\n", string[5]);
  printf("(int)string[6]: @%i@\n", string[6]);
  printf("(int)null character \0: @%i@\n", '\0');
}