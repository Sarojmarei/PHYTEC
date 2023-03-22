#include<stdio.h>
void sum(int x, int y)
{
    printf("sum is %d\n",x+y);
}
void diff(int a, int b)
{
    printf("Difference is %d\n", a-b);
}
void product(int z,int w)
{
    printf("product is %d\n",z*w);
}
void quotient(int p, int q)
{
    printf("quotient is %d\n",p/q);
}
int main()
{
    int n1,n2;
    printf("Enter the two number:\n");
    scanf("%d %d",&n1,&n2);
    sum(n1,n2);
    diff(n1,n2);
    product(n1,n2);
    quotient(n1,n2);
    return 0;

}