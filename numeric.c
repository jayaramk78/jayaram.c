#include <stdio.h>

int main()
{
    char ch;
    printf("\n Enter the string:");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    printf("\n It is a character");
    else if(ch>='0'&&ch<=9)
    printf("\n It is a numeric");
    else 
    printf("\n It is a special character");
    return(0);
}

