#include<stdio.h>
int display(int a)
{
    printf("%d",a);
}
int main()
{
    register int x=32,c;
    c=display(x);
    printf("%d",c);
    printf(" %p",&c);
    return 0;

}