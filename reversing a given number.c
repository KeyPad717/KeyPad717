#include<stdio.h>
void main()
{
    int n,rev=0,i;
    printf("enter n:");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    printf("reversed number is:%d",rev);
}
