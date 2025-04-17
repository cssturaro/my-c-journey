/* full payment -> down payment + two equal monthly installments. 
The down payment must be greater than or equal to both installments 
installments must be equal, whole numbers, and as large as possible. */

#include <stdio.h>

int main(void){
    float total, down_payment;
    int installments;

    printf("What is the product total value? \n> ");
    scanf("%f", &total);



    installments = total / 3;// each of the two installments are at max equal to the down_payment (1/3 is the max for each installmment, so down_payment will be equal)

    down_payment = total - installments * 2;

    printf("The down payment is %.2f and the installments are 2x %i", down_payment, installments);
    return 0;
}
