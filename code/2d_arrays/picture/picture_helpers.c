/*
this function takes:
  an input file name of a file with a matrix of integers ranging from 0 to 255 representing the darkness of a pixel
  an output file to generate an image file from the input file pixel data
example usage:
picture_it("pic.data", "hello.png");
this will create hello.png based off of the pixel data in pic.data

note:
this function is really just calling another program to create the .png file
the other program was created when you bootstrapped your workspace at the beginning of the semester
*/
void picture_it(char input_filename[], char output_filename[]) {
  char command[150];
  snprintf(command, sizeof(command), "python ~/ee160_scripts/matrix_to_picture.py %s %s", input_filename, output_filename);  
  system(command);
}