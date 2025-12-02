#include <stdio.h>
int main() {
int n;
printf("Enter any integer number: ");
scanf("%d", &n);
printf((n >= 0) ? ((n == 0) ? "Zero\n" : "Positive\n") : "Negative\n");
return 0;
}