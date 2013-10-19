#include <stdio.h>

#define SIZE 10

int main () {
  char word[SIZE];
  
  printf("Please enter a word:\n");
  scanf("%s", word);
  printf("You've entered: %s\n", word);
  
  int counter = 0;
  while(word[counter] != '\0') {
    printf("%c\n", word[counter]);
    counter++;
  }
  
  return 0;
}