// attempts, compleetions, yards, touchdowns, interceptions -> Quarterback Rating 

#include <stdio.h>

int main() {
    float attempts, completions, yards, touchdowns, interceptions;
    float a, b, c, d, rating;

    // Input data
    printf("Enter the number of pass attempts: ");
    scanf("%f", &attempts);
    printf("Enter the number of completed passes: ");
    scanf("%f", &completions);
    printf("Enter the number of passing yards: ");
    scanf("%f", &yards);
    printf("Enter the number of touchdown passes: ");
    scanf("%f", &touchdowns);
    printf("Enter the number of interceptions: ");
    scanf("%f", &interceptions);

    // Components of QB Rating
    a = ((completions / attempts) - 0.3f) / 0.2f;
    if (a > 2.375f) a = 2.375f;
    if (a < 0.0f) a = 0.0f;

    b = ((yards / attempts) - 3.0f) / 4.0f;
    if (b > 2.375f) b = 2.375f;
    if (b < 0.0f) b = 0.0f;

    c = (touchdowns / attempts) / 0.05f;
    if (c > 2.375f) c = 2.375f;
    if (c < 0.0f) c = 0.0f;

    d = 1.0f - ((interceptions / attempts - 0.095f) / 0.04f);
    if (d > 2.375f) d = 2.375f;
    if (d < 0.0f) d = 0.0f;

    // Final QB Rating 
    rating = ((a + b + c + d) * 100.0f) / 6.0f;
    printf("\nQuarterback Rating: %.2f\n", rating);

    return 0;
}
