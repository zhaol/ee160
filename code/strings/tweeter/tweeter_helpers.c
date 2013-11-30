/*
this function accepts a string and posts it to the following Twitter account:
https://twitter.com/ee160_uh_manoa

example usage:
tweet("hello twitter");

note:
this function is really just calling another program to do the actual posting to Twitter
the other program was created when you bootstrapped your workspace at the beginning of the semester
*/
void tweet(char string[]) {
  char command[150];
  snprintf(command, sizeof(command), "ruby ~/ee160_scripts/tweet.rb %s", string);
  system(command);
}