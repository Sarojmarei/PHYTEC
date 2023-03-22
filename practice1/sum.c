#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter the number\n");
    scanf("%d",&x);
    while (x>0)
    {
        int y=x%10;
        sum=sum+y;
        x=x/10;
    }
    printf("sum is %d\n",sum);
}