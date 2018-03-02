#include<stdio.h>
void main()
{
    int a[50],i , largest;
    printf("\n enter the numbers");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    largest=a[0];
    for(i=0;i<=5;i++)
    {
        if(largest<a[i])
        largest=a[i];
        
    }
    printf("\n the largest num in array is:%d",a[i]);
    
}
