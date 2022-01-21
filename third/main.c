#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // char *days[7]; // можно так, а можно и так, как снизу
    char **days = (char **)malloc(sizeof(char *) * 7);
    for (int i = 0; i < 7; i++) {
        days[i] = malloc(sizeof(char) * 12);
    }

    strcpy(days[0], "Monday");
    strcpy(days[1], "Tuesday");
    strcpy(days[2], "Wednesday");
    strcpy(days[3], "Thursday");
    strcpy(days[4], "Friday");
    strcpy(days[5], "Saturday");
    strcpy(days[6], "Sunday");

    int num_day;
    printf("Please, enter digit of day of week (1/2/3/4/5/6/7): ");
    scanf("%d", &num_day);
    if (num_day < 1 || num_day > 7) {
        return 1;
    }

    // с помощью switch-case, но довольно тупо, так как у меня создан массив
    // строк, где можно просто обратиться по индексу)))
    switch (num_day) {
    case 1:
        printf("%s\n", days[0]);
        break;
    case 2:
        printf("%s\n", days[1]);
        break;
    case 3:
        printf("%s\n", days[2]);
        break;
    case 4:
        printf("%s\n", days[3]);
        break;
    case 5:
        printf("%s\n", days[4]);
        break;
    case 6:
        printf("%s\n", days[5]);
        break;
    case 7:
        printf("%s\n", days[6]);
        break;
    default:
        break;
    }

    printf("\n%s\n", days[num_day - 1]); // второй вариант)))

    return 0;
}