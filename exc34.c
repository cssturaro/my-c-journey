// loan must be up to 10 times the monthly salary
// installments should be 30% of monthly salary
// monthly salary, loan requestetd, number of installments -> if the loan is possible or not

#include <stdio.h>

int main(void){
    float monthly_salary, loan_requested;
    int installments;

    printf("Type your monthly salary\n>  ");
    scanf("%f",&monthly_salary);
    printf("Type how much you want to loan\n>  ");
    scanf("%f",&loan_requested);
    printf("Type how many installments you want to pay\n>  ");
    scanf("%i",&installments);

    if (loan_requested < 10 * monthly_salary && loan_requested/installments < 0.3 * monthly_salary)
        printf("You can have a loan");
    else
        printf("Your loan was not aproved");
}
