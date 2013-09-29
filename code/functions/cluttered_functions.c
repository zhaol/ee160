#include <stdio.h>

main() {
    int value_returned_from_function;
    
    printf ("Hi from main\n");
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", 1);
    value_returned_from_function = 2;
    printf ("Bye from main\n");
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", value_returned_from_function);
}