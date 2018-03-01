#include<stdio.h>
int main()
{
    char a[50];
    int i,count=0;
    printf("\n enter the string ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==' ')
        count++;
    }
    printf("\n the no of spaces in the string is %d",count);
    return(0);
}
