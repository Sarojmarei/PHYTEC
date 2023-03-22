#include<stdio.h>
int main()
{
    int arr[5],i,j,temp,m;
    printf("enter the elements of the array\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements before sorting\n");
    for ( m = 0; m < 5; m++)
    {
        printf("%d\t",arr[m]);
    }
    
    for (int k=0;k<5;k++)
    {
        for (int l=0;l<5-1;l++)
        {
            if (arr[l]>arr[l+1])
            {
                temp=arr[l];
                arr[l]=arr[l+1];
                arr[l+1]=temp;
            }
        }
    }
    printf("elements after sorting\n");
    for (j=0;j<5;j++)
    {
        printf("%d\t",arr[j]);
    }

}