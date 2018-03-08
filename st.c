#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int i,j;
    printf("\n Enter the string");
    gets(a);
    printf("\n Enter the string");
    gets(b);
    while(a[i]!='\0')
    {
        i++;
            }
            while(b[j]!='\0')
            {
                a[i]=b[j];
                i++;j++;
                            }
            a[i]!='\0';
            printf("\n %s",a);
            return(0);
}
