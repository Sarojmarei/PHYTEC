/*#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the number :\n");
    scanf("%d",&x);
    for (i=7;i>=0;i--)
    {
        int j=(x>>i)&1;
        printf("%d",j);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Ënter the value of a:");
    scanf("%d",&a);
    printf("Ënter the value of b:");
    scanf("%d",&b);
    printf("Binary value of %d is \n",a);
    for (i =7;i>=0;i--)
    {
        int j= (a>>i)&1;
        printf("%d",j);
    }
    printf("Binary value of %d is:\n",b);
    for (i=7;i>=0;i--)
    {
        int x=(b>>i)&1;
        printf("%d",x);
    }
    c=a&b;
    printf("Binary value of %d is:\n",c);
    for (i=7;i>=0;i++)
    {
        int y=(c>>i)&1;
        printf("%d",y);
    }
    return 0;

}