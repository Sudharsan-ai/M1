#include <stdio.h>

int main() {
    int num1, den1, num2, den2;
    float frac1, frac2, min;
    printf("Enter numerator and denominator of first fraction: ");
    scanf("%d %d", &num1, &den1);
    printf("Enter numerator and denominator of second fraction: ");
    scanf("%d %d", &num2, &den2);
    frac1 = (float)num1 / den1;
    frac2 = (float)num2 / den2;

    min = (frac1 < frac2) ? frac1 : frac2;

    printf("The minimum of the two fractions is: %.4f\n", min);

    return 0;
}
