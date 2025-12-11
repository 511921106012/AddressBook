#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    
    int c=0,i=0;
    while(str[i]!=0)
    {
        if(str[i]>='a' && str [i] <= 'z')
        c++;
        i++;
    }
    printf("%s is the  charachter count is %d",str,c);
}