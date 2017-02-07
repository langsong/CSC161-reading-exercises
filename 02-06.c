// In grade.c
//If the input value is 81, the program will run from top to bottom and the result would be d. The if statements are not used in a way to end the process when the condition is met.

#include <stdio.h>

int main(void) {
  int grade = 83 /* arbitrary initialiaztion of grade */;
  char letter = 'f';    /* by default... */

  if (grade > 60) {
    letter = 'd';
  }
  if (grade > 70) {
    letter = 'c';
  }
  if (grade > 80) {
    letter = 'b';
  }
  if (grade > 90) {
    letter = 'a';
  }
  printf("%c\n", letter);
  return 0;
}
