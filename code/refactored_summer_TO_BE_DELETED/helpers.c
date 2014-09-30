/*   File:  helpers.c
     By:    The Awesome Students of EE160
     Date:  Today :) */

//  get_input() gets value inputted by user
int get_input() {
    int value_entered;
        
    scanf ("%d", &value_entered);
    return value_entered;
}

//  ask_for_input() displays the appropriate message to user
int ask_for_input(int current_number_of_input, int last_number_of_input) {
    if (current_number_of_input != last_number_of_input) {
        printf ("Enter a number to be added, pretty please: ");
    } else {
        printf ("Please enter the last number...make it count!: ");
    }
}