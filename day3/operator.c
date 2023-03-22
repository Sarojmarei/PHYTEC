#include<stdio.h>
int main()
{
    int a;
    float b;
    int c;
    a=10/45*23%45/(45%4*21);
    b=10+45.0*23-45+(4*21.0);
    c=9/4*23%4/(5%4*1);
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%d\n",c);
    return 0;
}