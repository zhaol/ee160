/*   File:  refactored_summer.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "refactored_summer.h"
#include "helpers.c"

/*  This program sums a set of numbers inputted by the user  */
main() {
    int total;
    int counter;
    
    counter = 1;
    while (counter <= MAX_NUMBER_OF_VALUES) {
        ask_for_input(counter, MAX_NUMBER_OF_VALUES);
        
        total = total + get_input();
        counter = counter + 1;
    }
    
    printf ("The total I've arduously calculated for you is: %d \n", total);
}