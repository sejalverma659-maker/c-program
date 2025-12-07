
#include<stdio.h>
int main() {
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n>0)
    {
        printf(" The number %d is positive",n);
        printf("Inside if block");
    }
    printf("Outside if block");
    return 0;
}
