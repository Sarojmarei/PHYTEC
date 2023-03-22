#include<stdio.h>
int dinner(int total)
{
    int a,b,c,d,e,f,g;
    printf("Menu of dinner\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("n1.roti\n2.dal\n3.paneer sabji\n4.chicken sabji\n5.allo sabji\n6.beans sabji\n7.swwet\n8.exit");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate roti-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*5;
            break;

            case 2:
            printf("1 plate dal-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*20;
            break;
             
            case 3:
            printf("1 plate panner curry-Rs 40\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*40;
            break;

            case 4:
            printf("1 plate chicken curry-Rs 60\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*60;
            break;

            case 5:
            printf("1 plate potato curry-Rs 40\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&e);
            return total+=e*40;
            break;

            case 6:
            printf("1 plate beans sabji-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&f);
            return total+=f*20;
            break;

            case 7:
            printf("1 plate sweets-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&g);
            return total+=g*5;
            break;

            


            



            default:
            printf("thankyou for having dinner");

        }
        if (ele==8)
        {
            break;
        }
    }
}