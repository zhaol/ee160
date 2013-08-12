#include <stdio.h>

main() {
    int integer = 1;
    int* integer_pointer = &integer;

    printf ("===integer===\n");
    printf ("%20d: integer, value of 'integer' variable\n", integer);
    printf ("%20p: &integer, address of 'integer' variable\n", &integer);
    printf ("%20s: *integer is a syntax error\n", "");
    printf ("%20d: *(&integer), value of (address of 'integer' variable)\n", *(&integer));
    printf ("===integer_pointer===\n");
    printf ("%20p: integer_pointer, value of 'integer_pointer' variable\n", integer_pointer);
    printf ("%20d: *integer_pointer, value of the object that the 'integer_pointer' variable points to\n", *integer_pointer);
    printf ("%20p: &integer_pointer, address of 'integer_pointer' variable\n", &integer_pointer);
    
    float real_number = 1.1;
    float* real_number_pointer = &real_number;  
    printf ("===real_number===\n");
    printf ("%20f: real_number, value of 'real_number' variable\n", real_number);
    printf ("%20p: &real_number, address of 'real_number' variable\n", &real_number);
    printf ("%20s: *real_number is a syntax error\n", "");
    printf ("%20f: *(&real_number), value of (address of 'real_number' variable)\n", *(&real_number));
    printf ("===real_number_pointer===\n");
    printf ("%20p: real_number_pointer, value of 'real_number_pointer' variable\n", real_number_pointer);
    printf ("%20f: *real_number_pointer, value of the object that the 'real_number_pointer' variable points to\n", *real_number_pointer);
    printf ("%20p: &real_number_pointer, address of 'real_number_pointer' variable\n", &real_number_pointer);
}