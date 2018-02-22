#include<stdio.h>
void main()
{
    int a[10],i;
    printf("\n enter the array of elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n elements with its index posistion are:");
    for(i=0;i<10;i++)
    {
        printf("\n %d \t %d",a[i],i);
    }
}
