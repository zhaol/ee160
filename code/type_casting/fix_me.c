#include <stdio.h>

int main() {
  int integer1 = 3;
  int integer2 = 4;
  float decimal = 4;
  
  // both statements should print out correct answer to 3/4 (e.g. 0.75)
  printf("int / float: %d\n", integer1/decimal);
  printf("int / int: %d\n", integer1/integer2);
  
  // you need to figure out what is the mod operator and how to use the mod operator
  // the output should be 1
  printf("using the %% operator: %f\n", decimal % integer1);
  
  return 0;
}