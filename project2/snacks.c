#include<stdio.h>
int snacks(int total)
{
    int a,b,c,d,e,f,g;
    printf("Menu of snacks\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("\n1.aloochop\n2.samosa\n3.wada\n4.papdi\n5.dal wada\n6.cream bread\n7.chuda mixture\n8.exit");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate aloochop-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*5;
            break;

            case 2:
            printf("1 plate samosa-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*5;
            break;
             
            case 3:
            printf("1 plate wada-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*5;
            break;

            case 4:
            printf("1 plate papdi-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*5;
            break;

            case 5:
            printf("1 plate dal wada-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&e);
            return total+=e*5;
            break;

            case 6:
            printf("1 plate cream bad-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&f);
            return total+=f*5;
            break;

            case 7:
            printf("1 plate chuda mixture-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&g);
            return total+=g*5;
            break;

            


            



            default:
            printf("thankyou for having breakfast");

        }
        if (ele==8)
        {
            break;
        }
    }
}