#include<stdio.h>
int main()
{
    int a[5],i,*p;
    p=a;
    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",*(p+i));
    }
}