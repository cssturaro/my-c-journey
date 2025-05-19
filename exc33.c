// read x and y -> which quadrant it  is (1-4)

#include <stdio.h>

int main(void){
    int x, y, quadrant;

    printf("Type x\n>  ");
    scanf("%i", &x);
    printf("Type y\n>  ");
    scanf("%i", &y);

    if (x>0 && y>0)
        quadrant = 1;
    else if (x<0 && y>0)
        quadrant = 2;
    else if (x<0 && y<0)
        quadrant = 3;
    else 
        quadrant = 4;

    printf("The cordinates quadrant is %i",  quadrant);

    return 0;
}
