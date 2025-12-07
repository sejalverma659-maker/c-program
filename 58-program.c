#include<stdio.h>
int main()
{
    int n,first,last;
    printf("enter a number:");
    sacnf("%d",&n);
    last=n%10;
    while(n>=10);
    {
        n=n/10;
    }
    first=n;
    printf("first digit=%d\n",first);
    printf("last digit=%d\n",last);
    return 0;
}
