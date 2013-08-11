#include <stdio.h>

main() {
    int integer = 1;
    int* integer_pointer = &integer;

    printf ("===integer===\n");
    printf ("integer (value of 'integer' variable): %d\n", integer);
    printf ("&integer (address of 'integer' variable): %p\n", &integer);
    printf ("*integer is a syntax error\n");
    printf ("*(&integer) (value of (address of 'integer' variable)): %d\n", *(&integer));
    printf ("===integer_pointer===\n");
    printf ("integer_pointer (value of 'integer_pointer' variable): %p\n", integer_pointer);
    printf ("*integer_pointer (value of the object that the 'integer_pointer' variable points to): %d\n", *integer_pointer);
    printf ("&integer_pointer (address of 'integer_pointer' variable): %p\n", &integer_pointer);
    
    float real_number = 1.1;
    float* real_number_pointer = &real_number;  
    printf ("===real_number===\n");
    printf ("real_number (value of 'real_number' variable): %f\n", real_number);
    printf ("&real_number (address of 'real_number' variable): %p\n", &real_number);
    printf ("*real_number is a syntax error\n");
    printf ("*(&real_number) (value of (address of 'real_number' variable)): %f\n", *(&real_number));
    printf ("===real_number_pointer===\n");
    printf ("real_number_pointer (value of 'real_number_pointer' variable): %p\n", real_number_pointer);
    printf ("*real_number_pointer (value of the object that the 'real_number_pointer' variable points to): %f\n", *real_number_pointer);
    printf ("&real_number_pointer (address of 'real_number_pointer' variable): %p\n", &real_number_pointer);
}