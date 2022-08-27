#include<stdio.h>
int main()
{
    int length;
    int i,size=0;
    char a[20],*ptr;
    gets(a);
    ptr=a;
    for(i=0;a[i]!='\0';i++);
    size=i;
    for(i=size-1;i>=0;i--)
    {
        printf("%c",*(ptr+i));
    }

}
