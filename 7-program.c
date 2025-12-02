#include<stdio.h> 
int main() { 
    float radius; 
    float circum; 
    printf("Enter radius:"); 
    scanf("%f" , &radius); 
    circum = 2*(22/7)*radius; 
    printf( " radius= %f, circum = %f\n", radius , circum); return 0;
    
}