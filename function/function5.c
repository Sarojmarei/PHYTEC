#include<stdio.h>
int area (int x, int y)
{
    return x*y;
}
int perimeter( int a, int b)
{
    return 2*(a+b);
}
int main()
{
    int l1,b1;
    printf("enter the length of the rectangle\n");
    scanf("%d",&l1);
    printf("enter the breadth of the rectangle\n");
    scanf("%d",&b1);
    printf("area of the rectangle is %d\n",area(l1,b1));
    printf("perimeter of the rectangle is %d\n",perimeter(l1,b1));
    return 0;

}
