#include <stdio.h>
#include <string.h>

int main () {
  char sentence[] = "first word second word";
  char word[] = "word";
  char *word_found_pointer;
  
  word_found_pointer = strstr(sentence, word);
  printf("'word_found_pointer' printed as a string in its entirety: %s\n", word_found_pointer);
  printf("'word_found_pointer' with first 5 characters skipped: %s\n", word_found_pointer + 5);
  
  return 0;
}