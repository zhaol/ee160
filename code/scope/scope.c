/*   File:  argument_scope.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

// global variables
int int_var = 10;

/*  This program prints out variables at different points in the program to see which variables are in scope  */
main() {
  // local variables to main
  int int_var = 20;
  
  printf ("[Start of Main] int_var: %i \n", int_var);
  
  int_var = int_var + 1;
  function1 (int_var);
  function2 ();
  
  printf ("[End of Main] int_var: %i \n", int_var);
}

/*  this function will test how arguments are scoped  */
int function1 (int passed_in_int_var) {
  // local variables to function1
  int int_var = 30;
  
  printf ("[Start of function1] int_var: %i \n", int_var);
  printf ("[Start of function1] passed_in_int_var: %i \n", passed_in_int_var);
  
  int_var = int_var + 5;
  passed_in_int_var = passed_in_int_var + 5;
  
  printf ("[End of function1] int_var: %i \n", int_var);
  printf ("[End of function1] passed_in_int_var: %i \n", passed_in_int_var);
}

int function2() {
  // local variables to function2
  int int_var = 40;
  
  printf ("[Inside function2] int_var: %i \n", int_var);
}