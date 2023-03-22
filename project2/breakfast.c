#include<stdio.h>
int breakfast(int total)
{
    int a,b,c,d,e,x=0,y=0;
    printf("Menu of breakfast\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("1.puri\n2.Idly\n3.Suji\n4.Utthapam\n5.Paratha\n6.exit\n");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("\n1 plate Puri-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*30;
            break;

            case 2:
            printf("1 plate idly-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*20;
            break;
             
            case 3:
            printf("1 plate suji-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*20;
            break;

            case 4:
            printf("1 plate utthapam-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*20;
            break;

            case 5:
            printf("1 plate paratha-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&e);
            return total+=e*20;
            break;



            default:
            printf("thankyou for having breakfast");

        }
        if (ele==6)
        {
            break;
        }
        
    }
}