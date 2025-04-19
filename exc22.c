// number -> its absolute value

#include <stdio.h>

int main(void){
    int abs;

    printf("Type a whole number: ");
    scanf("%i", &num);

    if (num > 0){
        abs = num;
    } else {
        abs = num + num * -2;
    }

    printf("Your number's absolute value is %i", abs);
}
