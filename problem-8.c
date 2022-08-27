#include<stdio.h>
int main()
{
    int a[5],i,*p,sum=0;
    p=a;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum+=*(p+i);
    }
    printf("\n\nsum=%d",sum);
}