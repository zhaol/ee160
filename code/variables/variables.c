#include <stdio.h>

main() {
    // declare variables
    int i_am_an_integer;
    char i_am_a_char;
    float i_am_a_float;
    double i_am_a_double;

    // initialize variables
    i_am_an_integer = 11;
    i_am_a_char = 'c';
    i_am_a_float = 1.23;
    i_am_a_double = 1.23;

    // use variables
    printf("This is an integer: %i \n", i_am_an_integer);
    printf("This is an char: %c \n", i_am_a_char);
    printf("This is an float: %2.3f \n", i_am_a_float);
    printf("This is an double: %f \n", i_am_a_double);
}