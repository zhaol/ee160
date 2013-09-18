#include <stdio.h>

main () {
  char word[4];
  int counter = 0;
  int alphabet = 97;
  
  while (counter <= 3) {
    if (counter != 3) {
      word[counter] = (char) alphabet;
    } else {
      word[counter] = '\0';
    }
    
    alphabet++;
    counter++;
  }
  printf("word is: %s\n", word);
}