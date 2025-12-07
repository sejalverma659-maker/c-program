#include<stdio.h>
int main()
{
    int n,rem,rev=0;
 printf("Enter the number:");
 scanf("%d",&n);
 while(n!=10)
 {
    rem=n%10
    rev=rev*10+rem;
    n/=10;
 }
 printf("The reverse order of %d original numberis %d",n,rev);
return 0; 
}
