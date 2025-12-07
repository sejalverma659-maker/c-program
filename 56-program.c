#include<stdio.h>
int main()
{
    int rows = 3;
    for(int i =0; i<=rows;i++)
    {
        for(int space = 1; space<=(rows - 1);space++)
        {
            printf("*");
        }
    printf("\n");    
    }
return 0;    
}