#include<stdio.h>
int main()
{
    int x,i,j,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("The value of %d in binary is \n ",x);
    for (i=7;i>=0;i--)
    {
        j=(x>>i)&1;
        printf("%d",j);

    }
    y=~x;
    printf("complement of %d is ",x);
    for (int k=7;k>=0;k--)
    {
        int z=(y>>k)&1;
        printf("\n%d",z);

    }
    return 0;
    
}