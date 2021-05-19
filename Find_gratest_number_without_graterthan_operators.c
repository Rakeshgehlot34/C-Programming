#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the number a & b ");
    scanf("%d %d",&a,&b);
    if(a%b==a)
    printf("a=%d is grater than b=%d",a,b);
    else
    printf("b=%d is grater than a=%d",b,a);
    
}