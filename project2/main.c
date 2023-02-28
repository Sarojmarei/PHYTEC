#include<stdio.h>
#include"canteen.h"
int main()
{
    int x,amt=0,a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    printf("------------------------\n");
    printf("welcome to  SDI canteen\n");
    printf("Menu\n");
    while (1)
    {
        printf("\n1.Breakfast\n2.lunch\n3.snacks\n4.dinner\n5.exit");
        printf("enter what you want to choose");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            a=breakfast(amt);
            break;

            case 2:
            b=lunch(amt);
            break;

           case 3:
           c=snacks(amt);
           break;

            case 4:
            d=dinner(amt);
            break;


            default:
            printf("------------------------------\n");
            printf("thank you for visiting canteen\n");
            

        }
        if (x==5)
        {
            break;
        }
        printf("total bill =%d\n",a+b+c+d);
        
        

    }
}