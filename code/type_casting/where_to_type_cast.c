#include <stdio.h>

int main() {
  int i_am_an_integer = 5;
  float i_am_a_float = 3;

  printf("(-x+(x^2-4y))/2y: %f\n", ((-i_am_an_integer)+(i_am_an_integer*i_am_an_integer)-(4*i_am_a_float))/(2*i_am_a_float));
  return 0;
}