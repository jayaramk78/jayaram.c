#include<stdio.h>
void main()
{
    int n,i ,sum=0;
    float average;
    printf("\n Enter the no:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i;
        average=sum/n;
            }
            printf("\n %f",average);
}
