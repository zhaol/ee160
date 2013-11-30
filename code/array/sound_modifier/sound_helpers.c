/*
this function takes a file name of a file with a list of numbers and changes it to an audio file (.wav)
example usage:
create_sound_file("reversed.data");
this will create reversed.wav based off of the audio data in reversed.data
this function also requires a file named original.wav to extract the audio's meta data from

note:
this function is really just calling another program to create the .wav file
the other program was created when you bootstrapped your workspace at the beginning of the semester
*/
void create_sound_file(char filename[]) {
  char command[150];
  snprintf(command, sizeof(command), "ruby ~/ee160_scripts/create_wavefile.rb %s", filename);
  system(command);
}