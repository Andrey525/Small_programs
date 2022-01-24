#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX_DIGITS 2 + 1

int enter_number(int *rezult) {
  char str_number[MAX_DIGITS];
  int i;
  fgets(str_number, MAX_DIGITS, stdin);
  __fpurge(stdin);
  i = 0;
  while (str_number[i] != '\0' && str_number[i] != '\n') {
    if (str_number[i] >= 0x30 && str_number[i] <= 0x39) {
      i++;
    } else {
      printf("Ошибка ввода!\n");
      return 1;
    }
  }
  if (str_number[0] == '\n') {
    printf("Ошибка ввода!\n");
    return 1;
  }
  *rezult = atoi(str_number);
  return 0;
}

int main() {
  int n;
  char A = 0x41;
  printf("Enter n: ");
  if (enter_number(&n)) {
    return 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= j) {
        printf("%c%c", A + j, A + j + 0x20);
      }
    }
    printf("\n");
  }
}