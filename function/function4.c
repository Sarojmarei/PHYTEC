/*#include<stdio.h>
int cube(int x)
{
    return x*x*x;
}
int main()
{
    int n1;
    printf("enter the number:\n");
    scanf("%d",&n1);
    printf("cube of %d is %d\n",n1,cube(n1));
    return 0;
}*/
/*#include<stdio.h>
void cube(void)
{
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    printf("cube of %d is %d",x,x*x*x);
}
int main()
{
    cube();
    return 0;
}*/
/*#include<stdio.h>
int cube(void)
{
    int x;
     printf("enter the number:\n");
     scanf("%d",&x);
     return x*x*x;
}
int main()
{
    printf("cube of a number is %d\n",cube());
    return 0;
}*/
#include<stdio.h>
void cube(int x)
{
    printf("cube of %d is %d",x,x*x*x);
}
int main()
{
    int n1;
    printf("enter the number:\n");
    scanf("%d",&n1);
    cube(n1);
    

}