#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a[30],b[30],c[30],i,n,m;
    printf("enter number of values to be added in first array:");
    scanf("%d",&n);
    printf("enter number of values to be added in the given array:");
    scanf("%d",&m);
    if(n==m)
    {
       printf("enter the values in first array\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the values in second array\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("addition of the given array is :\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",c[i]);
    }
    }
    else
    {
        printf("number of values to be entered must be same for both arrays");
    }



}
