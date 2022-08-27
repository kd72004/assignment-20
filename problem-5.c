#include<stdio.h>
int main()
{
    int a,b,*p=&a,*q=&b;
    scanf("%d",p);
    scanf("%d",q);
    if(*p > *q)
    {
        printf("\n %d is grater ",*p);
    }
    else 
    printf("\n %d is grater ",*q);
}