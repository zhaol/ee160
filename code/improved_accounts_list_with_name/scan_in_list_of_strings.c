#include <stdio.h>
#include <string.h>

#define NUMBER_OF_STRINGS 2
#define STRING_LENGTH 10
  
int main() {
  char list_of_strings[NUMBER_OF_STRINGS][STRING_LENGTH+1];
  
  scanf("%s", list_of_strings[0]);
  scanf("%s", list_of_strings[1]);
  
  printf("String 1: %s\n", list_of_strings[0]);
  printf("String 2: %s\n", list_of_strings[1]);
  
  return 0;  
}