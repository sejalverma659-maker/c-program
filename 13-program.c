#include <stdio.h>
int main() {
int x;
printf("Enter marks (0-50): ");
scanf("%d", &x);
if (x > 45 && x <= 50) printf("Outstanding marks\n");
else if (x > 30 && x <= 45) printf("Good marks\n");
else if (x > 15 && x <= 30) printf("Passing marks\n");
else if (x >= 0 && x <= 15) printf("Fail\n");
else printf("Invalid marks\n");
return 0;
}