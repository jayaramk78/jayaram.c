#include <stdio.h>

int main()
{
    int n,k,a[10],c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    for(int i=0;i<=k;i++)
    {
        c=c+a[i];
    }
    printf("sum",c);

    return 0;
}
