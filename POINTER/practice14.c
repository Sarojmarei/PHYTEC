#include<stdio.h>
int main()
{
    int a[5],*p;
    p=a;
    printf("enter the elements of the array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(p+i));
    }
    
}