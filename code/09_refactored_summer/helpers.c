/*   File:  helpers.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

/*  is_last_input() checks whether or not it's the last input loop  */
int is_last_input(int current_number_of_input, int last_number_of_input) {
    if (current_number_of_input == last_number_of_input) {
        return TRUE;
    } else {
        return FALSE;
    }
}

/*  get_input() displays the appropriate message and gets the input  */
int get_input(int special_message) {
    int value_entered;
        
    if (special_message) {
        printf ("Enter a number to be added, pretty please: ");
    } else {
        printf ("Please enter the last number...make it count!: ");
    }

    scanf ("%d", &value_entered);
    return value_entered;
}