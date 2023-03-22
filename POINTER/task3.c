#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int (*func)(int,int);

int main()
{
    int result;
    func=&add;
    result=(*func)(10,20);
    printf("addition =%d\n",result);
    func=&sub;
    result=(*func)(20,10);
    printf("subtraction=%d\n",result);
}