#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d %d %d %d",*p,&p,&a,*&a); 
    
}