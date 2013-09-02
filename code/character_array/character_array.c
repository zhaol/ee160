/*   File:  character_array.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

/*  This program initializes and sets a character array and then prints it out */
main() {
    //  this:
    char list_of_values[] = "byebye";
    //  is the same as this:
    //  char list_of_values[7];
    //  list_of_values[0] = 'b';
    //  list_of_values[1] = 'y';
    //  list_of_values[2] = 'e';
    //  list_of_values[3] = 'b';
    //  list_of_values[4] = 'y';
    //  list_of_values[5] = 'e';
    //  list_of_values[6] = '\0';

    printf("%s \n", list_of_values);
}