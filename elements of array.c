#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("\n enter the elements of array");
    for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
            }
            printf("\n The stored elements are");
            for(i=0;i<10;i++)
            {
                printf("\n %d",a[i]);
            }
            return(0);
}
