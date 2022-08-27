#include<stdio.h>
int main()
{
    char a[5]={'a','b','c','d','e'},*p;
    int i,count=0;
    p=a;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    printf("%d",count);
}