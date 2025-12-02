#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("Positive number (%d)\n", a);
    } else if (a < 0) {
        printf("Negative number (%d)\n", a);
    } else {
        printf("Zero (%d)\n", a);
    }

    return 0;
}