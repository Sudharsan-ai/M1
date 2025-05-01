#include <stdio.h>

int main() {
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    if (value == 1) {
        printf("The input value is equal to 1.\n");
    } else {
        printf("The input value is not equal to 1.\n");
    }

    return 0;
}
