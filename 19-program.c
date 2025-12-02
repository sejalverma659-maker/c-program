#include <stdio.h>
int main() {
char c;
int age;
printf("Enter your nationality (I or i for Indian): ");
scanf(" %c", &c);
if (c == 'I' || c == 'i') {
printf("Enter your age: ");
scanf("%d", &age);
if (age >= 18) printf("Eligible! Enter your voter ID number\n");
else printf("Not eligible\n");
} else {
printf("You are not Indian\n");
}
return 0;
}