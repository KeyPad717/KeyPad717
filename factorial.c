#include<stdio.h>
void main()
{
    int n,i,sum=1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum*i;
    }
    printf("factorial of %d is %d",n,sum);
    }
