#include <stdio.h>
int main() {
int n;
printf("Enter any number: ");
scanf("%d", &n);
if (n > 0) {
printf("The number %d is positive\n", n);
printf("Inside if block\n");
}
printf("Outside if block\n");
return 0;
}