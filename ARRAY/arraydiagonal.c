#include<stdio.h>
int main()
{
    int a[3][3];
    printf("enter the elements of the array\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf(" elements of the array are\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal elements of the matrix is\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
                }
        }
    }
    

}