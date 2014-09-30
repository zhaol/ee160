/*   File:  scalar_array_2darray_3darray.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define MAX_COL 10
#define MAX_ROW 10
#define MAX_PAGE 10

void display_variables(int scalar, int list[], int table[][MAX_COL], int book[][MAX_ROW][MAX_COL]);

// This program compares using scalar, array, 2D array variables, and 3D array variables
int main () {
  int scalar = 0;
  int list[MAX_COL] = {0};
  int table[MAX_ROW][MAX_COL] = {0};
  int book[MAX_PAGE][MAX_ROW][MAX_COL] = {0};
  
  display_variables(scalar, list, table, book);
  
  return 0;
}

void display_variables(int scalar, int list[], int table[][MAX_COL], int book[][MAX_ROW][MAX_COL]) {
  int counter1, counter2, counter3;
  
  printf("scalar: %d\n", scalar);
  
  for (counter1=0; counter1<MAX_COL; counter1++) {
    printf("list[%d]: %d\n", counter1, list[counter1]);
  }
  
  for (counter1=0; counter1<MAX_ROW; counter1++) {
    for (counter2=0; counter2<MAX_COL; counter2++) {
      printf("table[%d][%d]: %d\n", counter1, counter2, table[counter1][counter2]);
    }  
  }
  
  for (counter1=0; counter1<MAX_PAGE; counter1++) {
    for (counter2=0; counter2<MAX_ROW; counter2++) {
      for (counter3=0; counter3<MAX_COL; counter3++) {
        printf("table[%d][%d][%d]: %d\n", counter1, counter2, counter3, book[counter1][counter2][counter3]);
      }  
    }
  }
}