#include<stdio.h>
int main()
{
    int a,i,b;
    printf("\n enter the num:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    b=a*i;
    printf("\n the sum of first mltiples of 5 is %d",b);
    return(0);
}
