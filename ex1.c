#include <stdio.h>

int main() {
    char ch1, ch2, ch3;

    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);

    printf("Enter third character: ");
    scanf(" %c", &ch3);

    printf("Characters in reverse order: %c %c %c\n", ch3, ch2, ch1);

    return 0;
}
