#include<stdio.h>
int add(int *p,int *q)
{
    return *p+*q;
}
int main()
{
    int a,b;
    printf("input the 1st no:\n");
    scanf("%d",&a);
    printf("input the 2nd no:\n");
    scanf("%d",&b);
    printf("the sum of %d and %d is %d\n",a,b,add(&a,&b));

}