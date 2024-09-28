//Write a program to sort the given array
#include<stdio.h>
int main()
{
    int arr[100],i,n,min;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    for(i=0;i<=n-1;i++)
    {
        if(min>arr[i])
        {
            printf("%d",arr[i]);
            min=arr[i];

        }
    printf("%d ",arr[i]);
    }
}
