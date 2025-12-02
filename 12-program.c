#include <stdio.h>
int main() {
int x;
printf("Enter any number: ");
scanf("%d", &x);
if (x > 9 && x < 100) {
printf("Two digit number\n");
} else {
printf("Not a two digit number\n");
}
return 0;
}