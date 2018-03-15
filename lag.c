#include<stdio.h>
void main()
{
    int max,min, n,i,a[20];
    max=a[0];
    min=a[0];
    printf("\n enter the  no of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(a[i]>max)
    
        max=a[i];
    }
    for(i=0;i<=n;i++)
    {
    if(a[i]<min)
    
        min=a[0];
    }
    printf("\t The max and min are %d %d",max,min);
}
