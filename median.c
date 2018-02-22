#include<stdio.h>
void main()
{
    int a[10];
    int i;
    printf("\n enter the array of elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n array of elements");
    for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\n median is %d",a[5] );
}
