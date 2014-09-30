/*   File:  for_with_multiple.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using a for loop with multiple counters
int main () {
  int index1, index2;
  
  for (index1=0, index2=10; index1<=index2; index1++, index2--) {
    printf("index1: %d, index2: %d\n", index1, index2);
  }
  
  return 0;  
}