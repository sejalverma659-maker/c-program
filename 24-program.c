#include <stdio.h>
int main() {
int spoint, epoint;
printf("Enter starting and ending point: ");
scanf("%d %d", &spoint, &epoint);
while (spoint <= epoint) {
if (spoint % 2 == 0) printf("Even number = %d\n", spoint);
spoint++;
}
return 0;
}