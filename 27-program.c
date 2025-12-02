#include <stdio.h>
int main() {
int rows = 3, a = 1;
for (int i = 0; i < rows; i++) {
for (int j = 0; j <= i; j++) {
printf("%d", a);
a++;
}
printf("\n");
}
return 0;
}