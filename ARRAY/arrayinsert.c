#include<stdio.h>
#define  MAX 50
int main()
{
    int a[MAX],ele,n;
    printf("enter the no of elements in array want to insert\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);/* code */
    }
    printf(" elements of the array are\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d",a[i]);/* code */
    }
    printf("ënter the element you want to insert\n");
    scanf("%d",&ele);
    for(int i=n-1;i>=0;i--)
    {
        a[i+1]=ele;
        break;

    }
    printf("the new array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    

}