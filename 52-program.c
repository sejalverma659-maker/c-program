
#include<stdio.h>
int main()
{
    int n;
    int i = 1;              // initialisation
    printf("enter the value of n:");
    scanf("%d",&n);
    for(;i<=n; i++);        // condition, increment/decrement
    {
        printf("%d/n",n);
        return 0;
    }
}                   // if number of iteration ,loops, are known to you = FOR LOOP

