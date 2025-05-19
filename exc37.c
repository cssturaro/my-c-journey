// type 1 - $50
// type 2 - $100
// type 3 - $150
// type 4 - $250 / acree

// if area > 1000 acres, 5% discount 
// if cost > 750, 10% discount over the rest
// if both discounts are possible, area discount is calculated first

// type, area -> value to be payed

#include <stdio.h>

int main(void){
    int type, area;
    float cost;

    printf("Type your area\n>  ");
    scanf("%i", &area);
    printf("What's the type? \n 1 - $50 \n 2 - $100 \n 3 - $150 \n 4 - $250\n>  ");
    scanf("%i", &type);

    switch (type)
    {
    case 1: cost = area * 50; break;
    case 2: cost = area * 100; break;
    case 3: cost = area * 150; break;
    case 4: cost = area * 250; break;
    default: printf("ERROR: Not a valid type\n"); break;
    }

    cost = (area > 1000)? cost * 0.95 : cost;
    cost = (cost > 750)? (cost - 750) * 0.90 + 750: cost;

    printf("The cost will be: %.2f", cost);

    return 0;
}
