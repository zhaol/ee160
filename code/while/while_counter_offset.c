#include <stdio.h>

main() {
  int number_of_iterations = 3;
  int counter;

  counter = 0;
  while (counter < number_of_iterations) {
    printf ("Hip, hip, hooray!\n");
    if (counter == number_of_iterations - 1) {
      printf ("That was the last cheer. :(\n");
    }
    counter = counter + 1;
  }
}