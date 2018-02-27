#include <stdio.h>
#include<string.h> 
int main()
{
int length =0;
    char i, a[100];
    printf("enter the string\n");
     gets(a);
     for(i=0;a[i]!='\0';i++)
     {
         if(a[i]!=32)
          length++;
     }
     printf("length of the string is %s:%d",a,length);
     
    return(0);
}
