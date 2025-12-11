#include<stdio.h>
int main()
{
    char str[50];
    char ch;
    scanf("%s[^\n]",str);
    get char();
    pirntf("enter the value");
    scanf("%c",&ch);
    int ind=0;
    int count=0;
    while(str[ind]!=0)
    {
     if( str[ind]==ch)
     {
        count++;

     }
     ind++;

    }
    printf("%c is repeted %d times %s times",ch,count,str)l;
}