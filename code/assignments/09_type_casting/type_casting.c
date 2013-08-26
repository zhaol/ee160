#include <stdio.h>
#include <math.h>

main() {
    int i_am_an_integer;
    float i_am_a_float;

    i_am_an_integer = 11;
    i_am_a_float = 3.99;

    printf("This is type cast to a float: %f \n", (float) i_am_an_integer * 2.0);
    printf("The variable is still an integer: %i \n", i_am_an_integer);
    printf("This is type cast to an integer: %i \n", (int) floor(i_am_a_float) * 2);
    printf("This operation remains a float: %f \n", floor(i_am_a_float) * 2);
    printf("The variable is still a float: %f \n", i_am_a_float);
}