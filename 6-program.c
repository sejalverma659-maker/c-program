#include <stdio.h>
int main() {
int x;
int n = 10;
x = ++n; // pre-increment: n becomes 11, x = 11
printf("x = %d, n = %d\n", x, n);
return 0;
}