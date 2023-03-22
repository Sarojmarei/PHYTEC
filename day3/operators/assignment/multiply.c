#include<stdio.h>
int main()
{
    int a,b=3,c=4;
    a=b+(c*=4);
    printf("Value of a is :%d\n",a);
    printf("Value of c is :%d\n",c);

}