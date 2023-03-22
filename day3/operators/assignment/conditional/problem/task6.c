#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if (x>0)
    {
        printf("it is +ve no\n");
    }
    else if (x<0)
    {
        printf("it is a-ve no\n");

    }
    else
    {
        printf(" no is 0\n");
    }
}