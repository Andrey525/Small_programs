#include <stdio.h>

int main() {
    int number = 0;
    while (number < 10000 || number > 99999) {
        printf("Please, enter a five-digit number: ");
        scanf("%d", &number);
    }
    printf("Okay, your number was written!\n\n\tDividing a number into "
           "digits\n\n");
    printf("number = %d\n", number);
    int digit;
    int array[5];
    int i = 0;
    while (number > 10) {
        digit = number % 10;
        number = number / 10;
        array[i] = digit;
        i++;
    }
    array[i] = number;
    int temp;
    for (int j = 0; j <= i / 2; j++) {
        temp = array[j];
        array[j] = array[i - j];
        array[i - j] = temp;
    }
    for (int j = 0; j <= i; j++) {
        printf("array[%d] = %d\n", j, array[j]);
    }
    return 0;
}