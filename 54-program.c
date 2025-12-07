
#include<stdio.h>
int main()
{
    int rows=3;
    char a='A';
    printf("enter the number");
    scanf("%d",&rows);
    for (int i=0;i<rows;i++){
        for(int j=0;j<=rows;j++){
            printf("%c",a);
            a++;
        }
    printf("\n");    
    }
    return 0;  
}