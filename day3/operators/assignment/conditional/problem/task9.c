#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value to find factorial:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("can't find factorial");
    }
    int fact=1;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("the factorial is %d",fact);

}