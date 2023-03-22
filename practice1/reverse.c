#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    int num1=x/100;
    int num2=(x%100)/10;
    int num3=(x%10);
    int reverse=num3*100+num2*10+num1;
    printf("the reverse number is %d ",reverse);
    return 0;
}