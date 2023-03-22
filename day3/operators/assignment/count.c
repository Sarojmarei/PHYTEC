#include<stdio.h>
int main()
{
    int count=0,x,i;
    printf("Ënter the number :");
    scanf("%d",&x);
    printf("Binary value of %d is \n",x);
    for (i=7;i>=0;i--)
    {
        int j=(x>>i)&1;
        printf("%d",j);
        if (j==1)
        {
            count=count+1;
        }

    }
    printf("\n no of 1's in %d is %d",x,count);

}