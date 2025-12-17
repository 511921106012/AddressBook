#include<stdio.h>
int main()
{
    char ch;
    scanf(" %c",&ch);
    if(ch =='a' || ch == 'i'|| ch == 'e' || ch == 'o'|| ch == 'u' || ch =='A'|| ch =='E'|| ch == 'I'|| ch =='O'|| ch =='U' )
    {

        printf(" it is vovwel");
    }
    else if (ch >='0' && ch<='9')
    {
        printf(" it is constant");
        
    
    }
    else{
        printf(" it is not vovwel");
    }
}