/*   File:  argument_scope.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define LOOPS 1

// global variables
int       int_var = 10;
double double_var = 10.0;

/*  This program prints out variables at different points in the program to see which variables are in scope  */
main() {
    // local variables to main
    int       int_var = 20;
    double double_var = 20.0;
    
    printf ("[Start of Main]    int_var: %i \n",    int_var);
    printf ("[Start of Main] double_var: %f \n", double_var);
    
    int counter = 0;
    while (counter < LOOPS) {
        int_var    =    int_var + 1;
        double_var = double_var + 1.0;
        function1(int_var, double_var);
        function2();
        counter++;
    }
    
    printf ("[End of Main]    int_var: %i \n",    int_var);
    printf ("[End of Main] double_var: %f \n", double_var);
}

/*  this function will test how arguments are scoped  */
int function1(int passed_in_int_var, double passed_in_double_var) {
    // local variables to function1
    int       int_var = 30;
    double double_var = 30.0;
    
    printf ("[Start of function1]              int_var: %i \n",              int_var);
    printf ("[Start of function1]           double_var: %f \n",           double_var);
    printf ("[Start of function1]    passed_in_int_var: %i \n",    passed_in_int_var);
    printf ("[Start of function1] passed_in_double_var: %f \n", passed_in_double_var);
    
    int counter = 0;
    while (counter < LOOPS) {
        int_var              =              int_var + 5;
        double_var           =           double_var + 5.0;
        passed_in_int_var    =    passed_in_int_var + 5;
        passed_in_double_var = passed_in_double_var + 5.0;
        counter++;
    }
    
    printf ("[End of function1]              int_var: %i \n",              int_var);
    printf ("[End of function1]           double_var: %f \n",           double_var);
    printf ("[End of function1]    passed_in_int_var: %i \n",    passed_in_int_var);
    printf ("[End of function1] passed_in_double_var: %f \n", passed_in_double_var);
}

int function2() {
    // local variables to function2
    int       int_var = 40;
    double double_var = 40.0;
    
    printf ("[Inside function2]              int_var: %i \n",              int_var);
    printf ("[Inside function2]           double_var: %f \n",           double_var);
}