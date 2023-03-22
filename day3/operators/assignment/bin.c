#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l;
    printf("Ënter the value of a:");
    scanf("%d",&a);
    printf("Ënter the value of b:");
    scanf("%d",&b);
    printf("\nBinary value of %d is ",a);
    for (i =7;i>=0;i--)
    {
        int p= (a>>i)&1;
        printf("%d",p);
    }
    printf("\nBinary value of %d is",b);
    for (j=7;j>=0;j--)
    {
        int x=(b>>j)&1;
        printf("%d",x);
    }
    c=a&b;
    int d=a|b;
    printf("\nBinary value of %d is:",c);
    for (k=7;k>=0;k--)
    {
        int y=(c>>k)&1;
        printf("%d",y);
    }
    printf("\nBinary value of %d is:",d);
    for (l=7;l>=0;l--)
    {
        int z=(d>>k)&1;
        printf("%d",z);
    }
    return 0;

}