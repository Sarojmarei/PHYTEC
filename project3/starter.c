#include<stdio.h>
int starter(int total)
{
    int a,b,c,d,e,x=0;
    printf("Menu of starter\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("1.soup\n2.fish finger\n3.chiken pakoda\n4.panner tikka\n5.exit\n");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate soup-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*30;
            break;

            case 2:
            printf("1 fish finger-Rs 80\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*80;
            break;
             
            case 3:
            printf("1 chiken pakoda-Rs 120\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*120;
            break;

            case 4:
            printf("1 plate panner tikka-Rs 100\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*100;
            break;

           default:
            printf("thankyou for having starter");

        }
        if (ele==5)
        {
            break;
        }
    }
}