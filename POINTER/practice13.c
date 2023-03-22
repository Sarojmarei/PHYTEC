#include<stdio.h>
int main()
{
    int a,b;
    printf("input the 1st no:\n");
    scanf("%d",&a);
    printf("input the 2nd no:\n");
    scanf("%d",&b);
    int *p=&a;
    int *q=&b;
    if (*p>*q)
    {
        printf("%d is the maximum number\n",*p);
    }
    else
    {
        printf("%d is the maximum number\n",*q);
    }
}