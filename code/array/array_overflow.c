#include <stdio.h>

int main() {
  int variable = 1;
  int array[2];
  
  array[-1] = 10;
  array[0]  = 20;
  array[1]  = 30;
  array[2]  = 40;
  
  printf("%d\n", variable); // prints out 10 instead of 1
  return 0;
}