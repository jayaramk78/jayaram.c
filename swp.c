#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter the values");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n values after swapping %d,%d",a,b);
    
}
