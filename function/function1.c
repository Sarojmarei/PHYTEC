#include<stdio.h>
int sum(int x, int y)
{
    return x+y;
}
int diff(int a, int b)
{
    return a-b;
}
int product(int z,int w)
{
    return z*w;
}
int quotient(int p, int q)
{
    return p/q;
}
int main()
{
    int n1,n2;
    printf("Enter the two number:\n");
    scanf("%d %d",&n1,&n2);
    printf("sum is %d\n",sum(n1,n2));
    printf("difference is %d\n",diff(n1,n2));
    printf("product is %d\n",product(n1,n2));
    printf("quotient is %d\n",quotient(n1,n2));
    return 0;

}