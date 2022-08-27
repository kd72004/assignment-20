#include<stdio.h>
void swap (char **str1[],char **str2[])
{
    int i;
    char temp[5];
    for(i=0;i<=4;i++)
    {
        temp[i]=**(str1+i);
        **(str1+i)=**(str2+i);
        **(str2+i)=temp[i];
    }
}
int main()
{
    char *str1[5],*str2[5];
    fflush(stdin);
    fgets(*str1,5,stdin);
    fflush(stdin);
    fgets(*str2,5,stdin);
    swap(str1,str2);
    printf("%s\n",str1);
    printf("%s\n",str2);
}
