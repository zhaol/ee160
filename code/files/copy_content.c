#include <stdio.h>

#define MAX_STRING_SIZE 10

int main () {
  FILE *input_file_pointer;  
  FILE *output_file_pointer;  
  char text1[MAX_STRING_SIZE];
  char text2[MAX_STRING_SIZE];
  
  input_file_pointer = fopen("data/test.txt", "r");
  output_file_pointer = fopen("data/output.txt", "w");
  
  if (input_file_pointer == NULL || output_file_pointer == NULL) {
    printf("Error opening files\n");
  } else {
    printf("Successfully opened files\n");
    while (fscanf(input_file_pointer, "%s %s", text1, text2) != EOF) {
      fprintf(output_file_pointer, "%s %s\n", text1, text2);
    }
    fclose(input_file_pointer);
    fclose(output_file_pointer);
  }
  
  return 0;
}