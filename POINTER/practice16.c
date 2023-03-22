#include<stdio.h>
int main()
{
    int *fact,n;
    printf("enter the no to find factorial\n");
    scanf("%d",&n);
    *fact=1;
    for(int i=1;i<=n;i++)
    {
        *fact=*fact * i;
    }
    printf("%d factorial is %d\n",n,*fact);
}