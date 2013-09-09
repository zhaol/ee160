#include <stdio.h>

main() {
  int number_of_iterations = 3;
  int counter;

  counter = 1;
  while (counter <= number_of_iterations) {
      printf ("Hip, hip, hooray!\n");
      if (counter == number_of_iterations) {
        printf ("That was the last cheer. :(\n");
      }
      counter = counter + 1;
  }
}