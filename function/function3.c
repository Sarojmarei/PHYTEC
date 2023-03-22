#include<stdio.h>
int interest(int x, int y, int z)
{
    return (x*y*z)/100.0;
}
int main()
{
    int p,t,i;
    float r;
    for(i=0;i<=2;i++)
    {
        printf("Enter the principal amount:\n");
        scanf("%d",&p);
        printf("enter the rate:\n");
        scanf("%f",&r);
        printf("enter the time:\n");
        scanf("%d",&t);
        printf("simple interest is %d\n",interest(p,r,t));
    }
}

