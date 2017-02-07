#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
  for (int i = 10; i > 0; i--) {
    printf("%d\n", i);
  }
  for (int i = 10; i >= 0; i--) {
    printf("%d\n", i);
  }

  return 0;
}

//0 1 2 3 4 5 6 7 8 9
//0 1 2 3 4 5 6 7 8 9 10
//1 2 3 4 5 6 7 8 9 10
//10 9 8 7 6 5 4 3 2 1
//10 9 8 7 6 5 4 3 2 1 0

//1. for (int i = 0; i < 10; i++) {
//printf("%d\n", i)；
//for (int i = 1; i <= 10; i++) {
//printf("%d\n", i)；
//for (int i = 10; i > 0; i--) {
//printf("%d\n", i);
//2. for (int i = 0; i <= 10; i++) {
//printf("%d\n", i);
//3. for (int i = 10; i >= 0; i--) {
//printf("%d\n", i);
