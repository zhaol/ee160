/*   File:  array.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define MAX 5

/*  This program stores input in an array and then prints it the values of the list  */
main() {
    int list_of_values[MAX];
    int index;
    int input_value;

    for (index = 0; index < MAX; index++) {
        printf("How many times did Diego drum? \n");
        scanf ("%d", &input_value);
        list_of_values[index] = input_value;
    }
    
    for (index = 0; index < MAX; index++) {
        printf("This was the number of times Diego drummed: %d \n", list_of_values[index]);
    }
}