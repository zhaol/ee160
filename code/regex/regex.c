#include <stdio.h>
#include <regex.h>

// http://stackoverflow.com/questions/1085083/regular-expressions-in-c-examples
main() {
  char string_to_test[20] = "";
  regex_t my_regular_expression; // http://www.delorie.com/gnu/docs/glibc/libc_154.html
  regcomp(&my_regular_expression, "ENTER YOUR REGULAR EXPRESSION HERE", 0); // update this line with your regular expression

  printf("Press CTRL+c to exit\n");

  while(1) {
    printf("Please enter an email address:\n");
    scanf("%s", string_to_test);

    int regex_result = regexec(&my_regular_expression, string_to_test, 0, NULL, 0);

    if (!regex_result) {
      printf("%s is a valid email\n", string_to_test);
    } else {
      printf("%s is an invalid email\n", string_to_test);
    }
  }
}