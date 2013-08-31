#include <stdio.h>

#define DEBUG

main() {
    int first_number;
    int second_number;
    int result

    first_number = 3;
    second_number = 5;
    
    first_number = first_number + 1;
    #ifdef DEBUG
        printf("[DEBUG]: The intermediary result is: %d \n", (first_number + second_number));
    #endif
    result = (first_number + second_number) * second_number;
    
    printf ("The result is: %d \n", result);
