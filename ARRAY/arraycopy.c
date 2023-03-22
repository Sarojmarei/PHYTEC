#include<stdio.h>
int main()
{
    int a[2][2],b[2][2];
    printf("eneter the elements of the array\n ");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf(" elements of the original array\n ");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
             b[i][j]=a[i][j];
        }
    }
    printf("copied array is\n ");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}