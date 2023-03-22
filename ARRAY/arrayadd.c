#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    printf("eneter the elements of 1st array\n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("eneter the elements of 2nd array\n");
    for (int k=0;k<2;k++)
    {
        for (int l=0;l<2;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    for (int m=0;m<2;m++)
    {
        for (int n=0;n<2;n++)
        {
            c[m][n]=a[m][n]+b[m][n];
        }
    }
    printf("addition of two matrix\n");
    for (int o=0;o<2;o++)
    {
        for (int p=0;p<2;p++)
        {
            printf("%d\t",c[o][p]);
        }
        printf("\n");
        
    }

}