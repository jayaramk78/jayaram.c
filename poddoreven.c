#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the num");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n the product of the num is %d",c);
    if(c%2==0)
    {
        printf("\n It is even");
    }
        else 
        {
        printf("\n It is odd");
    }
}
