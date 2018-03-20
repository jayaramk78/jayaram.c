#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("\n Enter the string");
    scanf("%s",&str[i]);
    for(i=0;str[i]='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0'&& str[i]<='9'))
        {
            printf("yes");
        }
        else
        {
            printf("n");
        }
    }
}
