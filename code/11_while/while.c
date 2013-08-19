#include <stdio.h>

main() {
    int number;
    int counter;

    printf ("Sofia The First, how many times would you like this to be done? ");
    scanf ("%d", &number);
    
    counter = 0;
    while (counter < number) {
        printf ("Hooray for Sofia! \n");
        counter = counter + 1;
    }
}