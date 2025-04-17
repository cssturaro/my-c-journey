/*
  Given a requested withdrawal amount, determine the number of banknotes of each denomination 
  that should be dispensed. 

  The goal is to follow the "optimal distribution" criteria: Use the fewest number of banknotes possible.

  Available denominations: R$1.00, R$2.00, R$5.00, R$10.00, R$20.00, R$50.00, and R$100.00.
*/

#include <stdio.h>

int main(void){
    int amount;

    printf("How much money do you want to withdraw? \n> ");
    scanf("%i", &amount);

    printf("Your received: \n R$100: %i \n R$50: %i \n R$20: %i \n R$10: %i \n R$5: %i \n R$2: %i \n R$1: %i \n", 
        amount / 100, amount%100/50, amount%100%50/20, amount%100%50%20/10, amount%100%50%20%10/5, amount%100%50%20%10%5/2, amount%100%50%20%10%5%2/1);
}
