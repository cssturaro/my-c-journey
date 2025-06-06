// month number -> how many days

#include <stdio.h>

int main(void) {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month == 2) {
        printf("February has 28 days.\n");
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("This month has 30 days.\n");
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("This month has 31 days.\n");
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
