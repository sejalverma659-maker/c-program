#include <stdio.h>
int main() {
int day;
printf("Enter any number (1-4): ");
scanf("%d", &day);
switch (day) {
case 1: printf("Monday\n"); break;
case 2: printf("Tuesday\n"); break;
case 3: printf("Wednesday\n"); break;
case 4: printf("Thursday\n"); break;
default: printf("Invalid number\n"); break;
}
return 0;
}