#include <stdio.h>
int main() {
int x = 20, y = 30, temp;
printf("Before swapping: x = %d, y = %d\n", x, y);
temp = x;
x = y;
y = temp;
printf("After swapping: x = %d, y = %d\n", x, y);
return 0;
}