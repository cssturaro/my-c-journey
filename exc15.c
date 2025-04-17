// your height, your shadow building's shadow -> building height

#include <stdio.h>

int main(void){
    float y_height, y_shadow, b_height,  b_shadow;

    printf("What's your height? \n> ");
    scanf("%f", &y_height);
    printf("What's your shadow length? \n> ");
    scanf("%f", &y_shadow);
    printf("What's the building's shadown length? \n> ");
    scanf("%f", &b_shadow);
    
    b_height = y_height / y_shadow * b_shadow;

    printf("The building's height is %.2f", b_height);
}
