#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    int *p=&a;
    int *q=&b;
    printf("the sum of the entered no is %d\n",*p+*q);
}