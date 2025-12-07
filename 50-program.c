#include<stdio.h>
int main() {
    int spoint,epoint,even;
    printf("Enter starting and ending point:");
    scanf("%d%d",&spoint,& epoint);
    while(spoint!=epoint)
    {  even=spoint%2;
        if(even==0)
        {
            printf("even number=%d",spoint);
        }
        spoint++;
    }
    return 0;
}

