#include<stdio.h>
void main()
{
    int a[30],n,i,pos,val;
    printf("enter the number of values to be inserted in the given array:");
    scanf("%d",&n);
    printf("enter values:\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where you want to insert the new value:");
    scanf("%d",&pos);
    printf("enter the value to be added:");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;

    printf("the new array is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("enter the position of deletion of the given array:");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("the new array is:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",a[i]);
    }




}
