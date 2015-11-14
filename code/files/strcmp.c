#include <stdio.h>

main() {
  char str1a[] = "match";
  char str1b[] = "match";
  char str2a[] = "does not match";
  char str2b[] = "doesn't match";
  
  printf("when there's an exact match: %d\n", strcmp(str1a, str1b));
  printf("when there's no exact match: %d\n", strcmp(str2a, str2b));
}