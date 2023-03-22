#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping no are %d %d \n",a,b);
    if (a>b)
    {
        printf("swap is possible");
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after swapping no are %d %d\n",a,b);
    }
    else
    {
        printf("Swap is not possible");
    }


}