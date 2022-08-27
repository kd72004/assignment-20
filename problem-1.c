#include<stdio.h>
void  swap (int *,int *);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
}
void swap (int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}