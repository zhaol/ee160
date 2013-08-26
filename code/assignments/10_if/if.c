#include <stdio.h>

#define DEBUG

main() {
    int number;

    printf ("Enter a magical number: ");
    scanf ("%d", &number);
    
    if (number > 100) {
        #ifdef DEBUG
            printf("[DEBUG]: Inside TRUE block \n");
        #endif
        printf ("Your number is very magical! \n");
    } else {
         #ifdef DEBUG
            printf("[DEBUG]: Inside FALSE block \n");
        #endif
        printf ("Your number needs more magic :( \n");    
    }
}