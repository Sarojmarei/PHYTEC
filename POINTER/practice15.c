#include<stdio.h>
void swap(int *x,int *y,int *z)
{
    int *temp;
    *temp=*x;
}
int main()
{
    int a,b,c;
    printf("input the 1st number\n");
    scanf("%d",&a);
    printf("input the 2nd number\n");
    scanf("%d",&b);
    printf("input the 3rd number\n");
    scanf("%d",&c);
    int *p=&a;
    int *q=&b;
    int *r=&c;
    printf("value before swapping\n");
    printf("1st element is %d",*p);
    printf("2nd element is %d",*q);
    printf("3rd element is %d",*r);
    swap(&a,&b,&c);
}