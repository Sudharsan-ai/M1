#include <stdio.h>

int main() {
    int A;
    printf("Enter a value for A: ");
    scanf("%d", &A);
    if (A > 0) {
        printf("A is a positive number.\n");
    } else {
        printf("A is not a positive number.\n");
    }

    return 0;
}
