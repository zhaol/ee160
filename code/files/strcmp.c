#include <stdio.h>

main() {
  char str1a[] = "match";
  char str1b[] = "match";
  char str2a[] = "does not match";
  char str2b[] = "doesn't match";
  
  printf("%d\n", strcmp(str1a, str1b));
  printf("%d\n", strcmp(str2a, str2b));
}