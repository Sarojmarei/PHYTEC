#include<stdio.h>
int count()
{
    
    int count=0;
    count++;
    printf("%d\n",count);
    printf("address of count is %p\n",&count);
}
int main()
{
    count();
    count();
    count();
    count();
}