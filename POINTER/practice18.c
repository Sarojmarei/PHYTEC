#include<stdio.h>
int main()
{
    int a[15];
    int sum=0;
    int *p;
    p=a;
    printf("enter the elements of the array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nreverse order for the array is \n");
    for (int i = 4; i >=0; i--)
    {
        printf("%d\t",*(p+i));
    }
    
}