//call by reference-swapping numbers
#include <stdio.h>

void swapReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside function (*x = %d, *y = %d)\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    printf("Before swap (a = %d, b = %d)\n", a, b);
    swapReference(&a, &b);
    printf("After swap (a = %d, b = %d)\n", a, b);

    return 0;
}
