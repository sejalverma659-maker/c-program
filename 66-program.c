//call by reference
#include <stdio.h>

void changeValue(int *x) {
    *x = *x + 10;
    printf("Inside function (*x): %d\n", *x);
}

int main() {
    int a = 5;

    printf("Before function call (a): %d\n", a);
    changeValue(&a);
    printf("After function call (a): %d\n", a);

    return 0;
}
