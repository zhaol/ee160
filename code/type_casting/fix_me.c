#include <stdio.h>

int main() {
  int integer1 = 3;
  int integer2 = 4;
  float decimal = 4;
  
  // both statements should print out correct answer to 3/4
  printf("int / float: %d\n", integer1/decimal);
  printf("int / int: %d\n", integer1/integer2);
  
  return 0;
}