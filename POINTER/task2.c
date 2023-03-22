#include<stdio.h>
int add(int* ,int*);
int sub(int*,int*);
int mult(int* ,int*);
int div(int* ,int*);
int mod(int* ,int*);
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("addition of 2 no is %d",add(&a,&b));
    printf("subtraction of 2 no is %d",sub(&a,&b));
    printf("multiplication of 2 no is %d",mult(&a,&b));
    printf("division of 2 no is %d",div(&a,&b));
    printf("modulus of 2 no is %d",mod(&a,&b));

}
int add(int *p,int *q)
{
    return *p+*q;
}
int sub(int *p,int *q)
{
    return *p-*q;
}
int mult(int *p,int *q)
{
    return *p * *q;
}
int div(int *p,int *q)
{
    return *p / *q;
}
int mod(int *p,int *q)
{
    return *p%*q;
}