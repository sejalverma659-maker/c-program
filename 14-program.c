#include <stdio.h>
int main() {
int n;
printf("Enter any integer number: ");
scanf("%d", &n);
if (n > 0) printf("The number %d is positive\n", n);
else if (n < 0) printf("The number %d is negative\n", n);
else printf("The number is zero\n");
return 0;
}