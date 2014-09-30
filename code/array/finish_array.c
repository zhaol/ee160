/*   File:  finish_array.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define ARRAY_OFFSET -1
#define MAX 10

//  This program displays the array in different ways
main() {
  int list_of_values[MAX] = {1, 3, 4, 5, 6, 8, 9, 12, 16, 19};
  int index;

  index = 1;
  while (index <= MAX) {
    printf("Correct Order: %d\n", list_of_values[index+ARRAY_OFFSET]);
    index++;
  }
  
  index = MAX;
  while (index >= 1) {
    printf("Reverse Order: %d\n", list_of_values[index+ARRAY_OFFSET]);
    index--;
  }
  
  index = 1;
  while (index <= MAX) {
    if ((index % 3) == 1) {
      printf("Every third element: %d\n", list_of_values[index+ARRAY_OFFSET]);
    }
    index++;
  }
  
  index = 1;
  while (index <= MAX) {
    if ((list_of_values[index+ARRAY_OFFSET] % 3) == 0) {
      printf("All values that is divisible by 3: %d\n", list_of_values[index+ARRAY_OFFSET]);
    }
    index++;
  }
  
  return 0;
}