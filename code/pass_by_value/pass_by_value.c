/*   File:  pass_by_value.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>
//  This program shows how to pass a value to a function
main() {
	int main_variable = 2;
	function(main_variable);
	printf("%d\n", main_variable);
}

function(int function_variable) {
	function_variable++;
	printf("%d\n", function_variable);
}