#include<stdio.h>
void main ()
{
    int m1,m2,h1,h2,min,hours;
    printf("\n enter the hours and min");
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    min=m1-m2;
    hours=h1-h2;
    printf("\n abs value is %d %d",hours,min);
}
