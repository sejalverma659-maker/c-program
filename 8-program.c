#include <stdio.h>
int main() {
char c;
printf("Enter any character: ");
scanf(" %c", &c);
printf("The character '%c' ASCII value is %d\n", c, (int)c);
return 0;
}
