#include<stdio.h>
#include"main.h"
int main()
{
    int x,amt=0,a,b,c;
    a=0;
    b=0;
    c=0;
    printf("------------------------\n");
    printf("welcome to  resturant\n");
    printf("Menu\n");
    while (1)
    {
        printf("\n1.starter\n2.maincourse\n3.dessert\n4.exit");
        printf("enter what you want to choose");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            a=starter(amt);
            break;

            case 2:
            b=maincourse(amt);
            break;

            case 3:
            c=dessert(amt);
            break;

       

            default:
            printf("------------------------------\n");
            printf("thank you for visiting resturant\n");
        }
        if (x==4)
        {
            break;
        }
        printf("----------------------------\n");
        printf("total cost of bill=%d",a+b+c);
    
            
        

    }
     
}