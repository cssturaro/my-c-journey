// module 11 verification digit method.
// 4 numbers -> complete agency number

#include <stdio.h>

int main(void){
    int number, verification_digit;

    printf("Type the first 4 digits: \n>  ");
    scanf("%i", &number);

    verification_digit = 11 - ((number % 10) * 2 + ((number / 10) % 10) * 3 + ((number / 100) % 10) * 4 + (number / 1000) * 5) % 11;

    printf("%i-%i", number, verification_digit);

    return 0;
}
