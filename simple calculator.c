#include<stdio.h>
void main()
{
    int a,b;
    int add,sub,mult;
    float c,d,div=0;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mult=a*b;
    c=a;
    d=b;
    div=a/b;
    printf("addition of %d and %d is %d\n",a,b,add);
    printf("subtraction of %d and %d is %d\n",a,b,sub);
    printf("multiplication of %d and %d is %d\n",a,b,mult);
    printf("division of %f and %f is %f",c,d,div);
}
