// 3 num -> the sum of the two biggest

#include <stdio.h>

int main(void){
    int a, b, c, sum;

    printf("Type the first number: \n> ");
    scanf("%i", &a);
    printf("Type the second number: \n> ");
    scanf("%i", &b);
    printf("Type the third number: \n> ");
    scanf("%i", &c);

    if (a >= b && a >= c){
        sum = (b >= c)? a+b : a + c;
    } else if (b >= a && b >= c){
        sum = (a >= c)? b + a : b + c;
    } else {
        sum = (a >= b)? b + a : c + b;
    }

    printf("The sum of the two biggest numbers is %i \n", sum);

    return 0;
}
