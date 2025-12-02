#include <stdio.h>
int main() {
int x = 10, y = 4;
if (x > 0 && y > 0) printf("Both x and y are positive\n");
if (x > 10 || y > 5) printf("Either x is greater than 10 or y is greater than 5\n");
if (!(x == 10)) printf("x is not equal to 10\n");
else printf("x equals 10\n");
return 0;
}
