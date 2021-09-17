#include <stdio.h>

int main() {
  char c;
  while (c < 0x61 || c > 0x7A) {
    printf("Please, enter a lowercase letter: ");
    c = getchar();
    printf("Your char is %c\n", c);
  }
  char C = c - 0x20;
  printf("And the same char in uppercase is %c\n", C);
  return 0;
}