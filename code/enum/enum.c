/*   File:  enum.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using enum (enumerator)
int main () {
  enum fruits { APPLES, ORANGES, BANANAS };
  enum fruits my_fruit = APPLES;
  printf("%d\n", my_fruit);
  
  // this works also and is shorter to type, but fruits is now in the global namespace
  // typedef enum { APPLES, ORANGES, BANANAS } fruits;
  // fruits my_fruit = APPLES;
  // printf("%d\n", my_fruit);
  
  return 0;
}