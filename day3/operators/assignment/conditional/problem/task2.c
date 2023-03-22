#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number \n");
    scanf("%d %d %d",&a,&b,&c);
    int x=a>b?a:b;
    int y=x>c?x:c;
    printf("Largest number is %d\n",y);
}