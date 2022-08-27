#include<stdio.h>
int main()
{
    int i,count;
    char a[10],*p;
    p=a;
    fgets(a,10,stdin);
    while(*p!='\0')
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || (*p>='0' && *p<='9'))
        {
            count++;
        }
        p++;
    }
    printf("%d",count);
}