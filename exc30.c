// liters of gasoline or alcohol -> how much you own
/*
alcohol <25L -> 2% discount per liter
alcohol >25L -> 4% discount per liter
gasoline <25L -> 3% discount per liter
gasoline >25L -> 5% discount per liter */

#include <stdio.h>

int main(void){
    char type;
    float liters, price;

    printf("Choose your fuel type: \n [G] - Gasoline \n [A] - Alcohol \n\n> ");
    scanf("%c", &type);
    printf("How many liters do you want?\n> ");
    scanf("%f", &liters);

    switch (type)
    {
    case 'A':
        price = (liters <= 25)? liters * 1.9 * 0.98 : liters * 1.9 * 0.96;
        break;

    case 'G':
        price = (liters <= 25)? liters * 2.7 * 0.97 : liters * 2.7 * 0.95;
        break;
    }

    printf("You own %.2f\n", price);
}
