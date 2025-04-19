// number -> even or odd

#include <stdio.h>

int main(void){
    int num, mod;

    printf("Type a whole number: ");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("It's even");
    } else {
        printf("It's odd");
    }
}
