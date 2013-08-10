/*   File:  refactored_summer.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "refactored_summer.h"
#include "tfdef.h"
#include "helpers.c"

/*  This program sums a set of numbers inputted by the user  */
main() {
    int total;
    int counter;
    
    counter = 0;
    while (counter < MAX_NUMBER_OF_VALUES) {
        total = total + get_input(is_last_input(counter, MAX_NUMBER_OF_VALUES));
        counter = counter + 1;
    }
    
    printf ("The total I've arduously calculated for you is: %d \n", total);
}