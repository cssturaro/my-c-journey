// three numbers -> the biggest

#include <stdio.h>

int main(void){
    int num1, num2, num3;

    printf("Type the first whole number \n> ");
    scanf("%i", &num1);
    printf("Type the second whole number \n> ");
    scanf("%i", &num2);
    printf("Type the third whole number \n> ");
    scanf("%i", &num3);

    if (num3 <= num1 && num1 >= num2){
        printf("%i is the biggest", num1);
    }   else if(num3 <= num2 && num2 >= num3) {
        printf("%i is the biggest", num2);
    }   else {
        printf("%i is the biggest", num3);
    }
}
