// number -> its module

#include <stdio.h>

int main(void){
    int num;

    printf("Type a whole number: ");
    scanf("%i", &num);

    if (num > 0){
        mod = num;
    } else {
        mod = num + num * -2;
    }

    printf("Your number module is %i", mod);
}
