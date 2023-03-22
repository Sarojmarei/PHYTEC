#include<stdio.h>
int main()
{
    int a[5];
    printf("ënter the elements of the array\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array ARE\n");
    for (int i=0;i<5;i++)
    {

        printf("%d\t",a[i]);
    }
    printf("\nreverse array is \n");
    for (int i=5-1;i>=0;i--)
    {

        printf("%d\t",a[i]);
    }
}