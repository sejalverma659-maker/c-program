
#include<stdio.h>
int main() 
{
    int i,j;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<=i;j++)
        {
            printf("%c",'A'+j);
        }
    printf("\n");    
    }
return 0;    
}