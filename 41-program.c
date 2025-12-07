
#include<stdio.h>
int main() {
    int a,b,temp;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;
    printf("after swapping\n");
    printf("a is %d,b is %d",a,b);
    return 0;
}
