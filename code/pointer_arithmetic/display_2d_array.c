/*   File:  display_2d_array.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define MAX_COL 3
#define MAX_ROW 2
#define ARRAY_OFFSET -1

// This program prints out the content of a 2D array
int main () {
  int array[MAX_ROW][MAX_COL] = {{11, 12, 13}, {14, 15, 16}};
  int *array_pointer = &array[0][0];
  int pointer_counter;
  
  for (pointer_counter=1; pointer_counter<=MAX_COL*MAX_ROW; pointer_counter++) {
    printf("array_pointer + %d: %d\n", pointer_counter + ARRAY_OFFSET, *(array_pointer + pointer_counter + ARRAY_OFFSET));  
    // printf("array[%d]: %d\n", pointer_counter + ARRAY_OFFSET, *(array_pointer + pointer_counter + ARRAY_OFFSET)); // this is not very intuitive but it gives you an idea of how these values are being stored by C
  }
  
  /* You would need a nested loop if you are using array indexing
  int col_counter, row_counter;
  for (row_counter=1; row_counter<=MAX_ROW; row_counter++) {
    for (col_counter=1; col_counter<=MAX_COL; col_counter++) {
      printf("array[%d][%d]: %d\n", row_counter+ARRAY_OFFSET, col_counter+ARRAY_OFFSET, array[row_counter+ARRAY_OFFSET][col_counter+ARRAY_OFFSET]);
    }
  }
  */
  
  return 0;
}