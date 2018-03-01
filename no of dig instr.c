#include<stdio.h>
int main()
{
    int a[100],i;
   int count=0;
    printf("\n enter the character");
    scanf("%d",&a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("\n the no of letters in the string is %d",count+1);
    return(0);
}
