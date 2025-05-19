// number -> correspondent day of the week (1 = sunday)
#include <stdio.h>

int main(void){
    int day;

    printf("Type the number of your correspondent day\n>  ");
    scanf("%i", &day);

    switch (day)
    {
    case 1: printf("Sunday"); break;
    case 2: printf("Monday"); break;
    case 3: printf("Tuesday"); break;
    case 4: printf("Wednesday"); break;
    case 5: printf("Thursday"); break;
    case 6: printf("Friday"); break;
    case 7: printf("Saturday"); break; 
    
    default: printf("Not a valid number"); break;
    }

    return 0;
}
