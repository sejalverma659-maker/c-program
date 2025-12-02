#include <stdio.h>
int main() {
double ts, bs, da, ta, hra;
printf("Enter Basic Salary: ");
if (scanf("%lf", &bs) != 1) return 1;
if (bs < 35000) {
da = 0.04 * bs; ta = 0.03 * bs; hra = 0.04 * bs;
} else if (bs < 80000) {
da = 0.05 * bs; ta = 0.04 * bs; hra = 0.05 * bs;
} else {
da = 0.06 * bs; ta = 0.05 * bs; hra = 0.07 * bs;
}
ts = (bs + da + ta) - hra;
printf("The Total Salary = %.2f\n", ts);
return 0;
}
