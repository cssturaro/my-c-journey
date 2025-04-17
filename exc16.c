// 3 algarism number (456) -> inverted number (654)

#include <stdio.h>

int main(void){

    int num, inverted_num;

    printf("Type a 3 algarism number: \n> ");
    scanf("%i", &num);

    inverted_num = num % 10 * 100 + (num / 10) %10 * 10 + (num/100);
    
    printf("Your inverted number is: %i", inverted_num);

}
