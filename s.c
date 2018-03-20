#include <stdio.h>

int main()
{
   int i,j;
   printf("\n Enter the values ");
   scanf("%d%d",&i,&j);
   i=i^j;
   j=i^j;
   i=i^j;
   printf("\n values after swaping%d %d",i,j);
    return 0;
}
