#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,count=0;
    printf("\n enter the string");
    scanf("%[^\n]s", s);
    for(i=0;i!='\0';i++)
    {
        if(s[i]==' ')
        count=count+1;
    }
    printf("\n the number of letters in string is %d",count);
    return(0);
}
