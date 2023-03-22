#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int sum=0;
    printf("Sum of %d natural numbers is ",n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}