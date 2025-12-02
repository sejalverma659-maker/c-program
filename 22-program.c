#include <stdio.h>
int main() {
int n = 10, i;
for (i = 0; i < n; i++) {
if (i == 2) break; // stops loop when i==2
printf("i = %d\n", i);
}
return 0;
}
