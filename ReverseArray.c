//Write a program to reverse the array
#include<stdio.h>
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d ",arr[i-1]);
    }
    return 0;
}
