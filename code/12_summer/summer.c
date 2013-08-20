#include <stdio.h>

#define MAX_NUMBER_OF_VALUES 3

main() {
    int total;
    int counter;
    int value_entered;
    
    counter = 1;
    while (counter <= MAX_NUMBER_OF_VALUES) {
        if (counter == MAX_NUMBER_OF_VALUES) {
            printf ("Please enter the last number...make it count!: ");
        } else {
            printf ("Enter a number to be added, pretty please: ");
        }
    
        scanf ("%d", &value_entered);
        
        total = total + value_entered;
        counter = counter + 1;
    }
    
    printf ("The total I've arduously calculated for you is: %d \n", total);
}