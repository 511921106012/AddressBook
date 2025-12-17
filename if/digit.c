#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='0' && n<='9')
    {
        printf(" it is charater digit");
    }
    else
    {
        printf(" it is not character digit");
    }
}