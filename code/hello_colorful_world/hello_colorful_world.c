#include <stdio.h>

#define NORMAL  "\x1B[0m"
#define BLACK   "\x1B[30m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define WHITE   "\x1B[37m"
  
main() {
  printf(        "Hello ");
  printf(RED     "c");
  printf(GREEN   "o");
  printf(YELLOW  "l");
  printf(BLUE    "o");
  printf(MAGENTA "r");
  printf(CYAN    "f");
  printf(WHITE   "u");
  printf(BLACK   "l");
  printf(NORMAL  " world\n");
  // this is equivalent to:
  /*
  printf("Hello ");
  printf("\x1B[31mc");
  printf("\x1B[32mo");
  printf("\x1B[33ml");
  printf("\x1B[34mo");
  printf("\x1B[35mr");
  printf("\x1B[36mf");
  printf("\x1B[37mu");
  printf("\x1B[30ml");
  printf("\x1B[0m world\n");
  */
}