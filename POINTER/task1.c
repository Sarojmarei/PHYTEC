#include<stdio.h>
int add(int *p,int *q)
{
    int c=*p+*q;
    printf("addition of 2no is %d",c);
}
int add(int* ,int*);
int main()
{
    int a,b;
    a=10;
    b=20;
    add(&a,&b);
}
