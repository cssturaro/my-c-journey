// salary -> social security discount ($334,29 or 11% of your salary: the lowest)

#include <stdio.h>

int main(void){
    float salary, discount;

    printf("Type your salary\n> ");
    scanf("%f", &salary);

    discount = (salary * 0.11 > 334.29)? 334.29 : salary * 0.11;

    printf("Your social security discount is: %.2f", discount);
}
