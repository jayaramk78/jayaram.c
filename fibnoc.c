
#include<stdio.h>
int main()
{
    int t1=0, t2=1, n, next, i;
    printf("\n enter the no of terms");
    scanf("%d",&n);
     printf("\n fibnoci series");
    for(i=0;i<=n;i++)
    {
                printf("\n %d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return(0);
}
