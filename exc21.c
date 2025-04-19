// number -> is positive or not

#include <stdio.h>

int main(void){
    int num;

    printf("Type a whole number: \n> ");
    scanf("%i", &num);

    if (num > 0){
        printf("You typed a positive number");
    } else {
        printf("You typed a negative number");
    }
}
