#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("\n enter the number");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
       fact=fact*i;
printf("\n factorial of %d is:%d",a,fact);
return(0);
}
