#include<stdio.h>
void array_sort(int *,int );
int main()
{
    int a[5], size=5;
    int *p=a;
    for(int i=0;i<=5-1;i++)
    {
        scanf("%d",&a[i]);
    }
    array_sort(a,size);
}
void array_sort(int *p,int size)
{
    int i;
    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(p+i) > *(p+j))
            {
                int swap=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=swap;
            }
        }
    }
    for(i=0;i<=size-1;i++)
    {
        printf("%d\n",*(p+i));
    }
}