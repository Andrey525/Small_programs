#include <math.h>
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
  int n, nn;
  int i, j;
  printf("Enter n (count of *): ");
  if (enter_number(&n) == 1) {
    exit(EXIT_FAILURE);
  }
  printf("n = %d\n", n);
  nn = n * 2;
  for (i = 0; i < n; i++) {
    for (j = 0; j < nn; j++) {
      if ((j == n - i) || (j == n + i)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}