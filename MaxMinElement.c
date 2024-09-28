#include<stdio.h>
int main()
{
    int arr[100],m;
    int i,n,min;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    m=arr[0];
    for(i=1;i<=n-1;i++)
    {
        if(m<arr[i]){

            m=arr[i];
            }
    }
printf("max=%d\n",m);
 min=arr[0];
    for(i=1;i<=n-1;i++)
    {
        if(m>arr[i]){

            m=arr[i];
            }
    }
printf("min=%d",min);







    return 0;

}
