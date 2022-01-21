#include <stdio.h>

int main() {
    int digit, degree, rezult = 1;
    printf("Enter a digit: ");
    scanf("%d", &digit);
    printf("Enter a degree: ");
    scanf("%d", &degree);
    printf("Raise %d to the power of %d\n", digit, degree);

    for (int i = 0; i < degree; i++) {
        rezult = rezult * digit;
    }
    printf("rezult = %d\n", rezult);
    return 0;
}