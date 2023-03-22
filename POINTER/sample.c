#include<stdio.h>
int main()
{
    int *p,a;
    a=10;
    p=&a;
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%u\n",*p);
    printf("%u\n",p);
}