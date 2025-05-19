//5 exams' grades -> classification:
// A - passed every exam
// B - passed I, II and IV but not in III or V
// C - passed I, II, III or IV but not in V
// failed - other cases
// (70 is avarage)

#include <stdio.h>

int main(void){
    int a, b, c, d, e;

    printf("Type 1st exam grade:\n>  ");
    scanf("%i", &a);
    printf("Type 2nd exam grade:\n>  ");
    scanf("%i", &b);
    printf("Type 3rd exam grade:\n>  ");
    scanf("%i", &c);
    printf("Type 4th exam grade:\n>  ");
    scanf("%i", &d);
    printf("Type 5th exam grade:\n>  ");
    scanf("%i", &e);

    a = (a>=70);
    b = (b>=70);
    c = (c>=70);
    d = (d>=70);
    e = (e>=70);

    printf("Classification: ");
    if (a && b && c && d && e) printf("A");
    else if (a && b && d && (!c || !e)) printf("B");
    else if (a && b && (c || d) && !e) printf("C");
    else printf("Failed");

    return 0;
}
