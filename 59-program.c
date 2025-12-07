#include<stdio.h>
int main()
{
    int num,firstdigit,lastdigit,sum;
    printf("enter a number:");
    scanf("%d",&num);
    lastdigit=num%10;
    while(num>10)
    {
        num=num/10
        }
}
      

#include<stdio.h>
void swap(int*x,int*y)
{
    printf("before swapping,x is %d and y is %d",x,y);
    int temp=x;
    x=y;
    y=temp;
    printf("after swap,x is %d and y is %d",x,y); 
} 
int main()
{
    int a=10,b=20;
 printf("before swap,a is %d,b is %d",a,b);
      swap(&a,&b);
 printf("after swap,a is %d,b is %d",a,b);
    return 0;
}
