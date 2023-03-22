#include<stdio.h>
int main()
{
    int n,i,j;
    int arr[n];
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for ( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements of the array are\n");
    for ( j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
    
}