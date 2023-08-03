#include <stdio.h>
int main() {
    double C,F;
    printf("Enter the temperature in C: ");
    scanf("%lf", &C);
    F = 1.8 * C + 32;
    printf("%lf \n", F);
    return 0;
}