#include<stdio.h>
int main()
{
    int a[5],n;
    printf("enter the elements of the array\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array is\n");
    for (int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("enter the position of the array want to delete\n");
    scanf("%d",&n);
    if (n>5)
    {
        printf("deletion not possible\n");
    }
    else
    {
        for (int i=n-1;i<5;i++)
        {
            a[i]=a[i+1];
        }
    }
    printf("after deletion\n");
    for (int i=0;i<5-1;i++)
    {
        printf("%d",a[i]);
    }
}