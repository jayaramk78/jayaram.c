#include <stdio.h>

int main()
{
  int count,n;
  printf("enter the values");
  scanf("%d",&n);
  while(n!=0)
  {
      n=n/10;
      count++;
  }
   
printf("%d",count);
return(0);
}
