// 3 num -> weighted average (5, 2.5, 2.5 are the weights)

#include <stdio.h>

int main(void){
    float a, b, c, w_avg;

    printf("Type the first number: \n> ");
    scanf("%f", &a);
    printf("Type the second number: \n> ");
    scanf("%f", &b);
    printf("Type the third number: \n> ");
    scanf("%f", &c);

    if (a >= b && a >= c){
        a *= 5;
        b *= 2.5;
        c *= 2.5;
    } else if (b >= a && b >= c){
        b *= 5;
        a *= 2.5;
        c *= 2.5;
    } else {
        c *= 5;
        a *= 2.5;
        b *= 2.5;
    }

    w_avg = (a + b + c) / 10;

    printf("The weighted average is %.2f\n", w_avg);

    return 0;
}
