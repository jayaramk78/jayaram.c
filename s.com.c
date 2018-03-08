#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
int i,temp;
    printf("\n Enter the string");
    gets(a);
    printf("\n enter the string");
    gets(b);
    for(i=0;(a[i]!='\0')||(b[i]!='\0');i++)
      {
      a[i]=b[i];
      temp=1;
      }
      if(temp==1)
      printf("\n both strings are equal ,%s",a[i]);
      else 
      printf("\n both strings are not equal");
         
    return(0);
}
