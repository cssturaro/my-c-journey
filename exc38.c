// a program that says if a year is a leap year
#include <stdio.h>

int main(void){
    int year;

    printf("Type your year:\n>  ");
    scanf("%i", &year);

    if (year % 4 == 0 && ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 400 != 0))) 
        printf("It's a leap year");
    else 
        printf("It's not a leap year");

    return 0;
}
