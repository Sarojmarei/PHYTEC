#include<stdio.h>
int display(int a,int b, int c)
{
    int x=b+c;
    int i;
    int product=1;
    for (i=1;i<=x;i++)
    {
        if (product ==1)
        {
            product=a*a;
        }
        else
        {
            product=product*2;
        }
    }
    return product;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",display(x,y,z));

}