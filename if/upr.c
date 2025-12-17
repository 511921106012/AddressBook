#include<stdio.h>
int main()
{
    char ch;
    scanf(" %s",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("it is upper case");

    }
    else
    {
        printf(" it si lower case");
    }
}