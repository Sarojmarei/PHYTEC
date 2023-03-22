#include<stdio.h>
int main()
{
    int a[10],sum=0;
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
    for(int i=0;i<5;i++)
    {
        sum=sum+ *(p+i);
    }
    printf("\nsum of elements of the array is %d\n",sum);
}