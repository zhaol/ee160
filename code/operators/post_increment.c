#include <stdio.h>

int main () {
  int variable = 1;
  printf("variable is now: %d\n", variable++);
  printf("variable is now: %d\n", variable++);
  printf("variable at the end is: %d\n", variable);
  return 0;
}