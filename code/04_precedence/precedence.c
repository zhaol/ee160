#include <stdio.h>

#define DEBUG

main() {
    int first_number;
    int second_number;
    int result;

    printf ("Enter the first number: ");
    scanf ("%d", &first_number);
    
    printf ("Enter the second number: ");
    scanf ("%d", &second_number);
    
    #ifdef DEBUG
        printf("[DEBUG]: The intermediary result is: %d \n", (first_number + second_number));
    #endif
    
    result = (first_number + second_number) * second_number;
    
    printf ("The result is: %d \n", result);
}