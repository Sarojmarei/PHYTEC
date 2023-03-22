#include<stdio.h>
int main()
{
    int a[10],sum=0,add=0;
    printf("enter the elements of the array are\n");
    for( int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array are\n");
    for( int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for( int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("\nsum of the array is: %d\n",sum);
    for( int i=5;i<10;i++)
    {
        add=add+a[i];
    }
    if (sum==add)
    {
        printf("sum is equal\n");
    }
    else
    {
        printf("sum is not equal\n");
    }

}