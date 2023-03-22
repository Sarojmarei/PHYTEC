#include<stdio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    int y=(((x+8)/3)%5)*5;
    printf("value of y is %d ",y);
}