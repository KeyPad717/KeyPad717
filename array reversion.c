#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[30],i,n;
    printf("enter number of values to be added in the given array:");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the reversed array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
