#include <stdio.h>
int main() {
int n, i;
unsigned long long product = 1;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 1; i <= n; ++i) product *= i;
printf("Product of first %d natural numbers is: %llu\n", n, product);
return 0;
}