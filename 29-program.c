#include <stdio.h>
int main() {
int rows = 4;
int nst = 1, nsp = rows - 1;
for (int i = 1; i <= rows; i++) {
for (int k = 1; k <= nsp; k++) printf(" ");
for (int j = 1; j <= nst; j++) printf("*");
nsp--; nst += 2;
printf("\n");
}
return 0;
}