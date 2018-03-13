#include <stdio.h>
int main()
{
   char a[50], b[50]; int i, j;
   printf("\nEnter first string: ");
   scanf("%s",a);
   printf("\nEnter second string: ");
   scanf("%s",b);
   
   for(i=0; a[i]!='\0'; ++i); 
 
  
   for(j=0; b[j]!='\0'; ++j, ++i)
   {
      a[i]=b[j];
   }
  
   a[i]='\0';
   printf("\nOutput: %s",a);
   
   return 0;
}
