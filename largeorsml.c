#include<stdio.h>

int main()
{
           int a ,b,c;
   printf("enter the value");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c)
   {
       printf("the larger value is %d",a);
       
   }
    if(b>a && b>c)
   {
       printf("the larger value is %d,b");
       
   }
  else
  {
      printf("the larger value is %d,c");
      
  }
  else
  {
      printf("all are equal")
  }
return(0);
}
