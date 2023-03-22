#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("REG_LED=\n");
    for (int i=7;i>=0;i--)
    {
        int k=(x>>i)&1;
        printf("%d\t",k);
        
    }
    int c=x|((1<<3)|(1<<4));
    printf("After turn off\n");
    for (int j=7;j>=0;j--)
    {
        int y=(c>>j)&1;
        printf("%d\t",y);
    }
    return 0;

}