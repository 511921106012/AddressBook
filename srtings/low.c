#include<stdio.h>
void fun(char *str)
{
    int i=0;
    while(str[i])
    {
        if((str[i])>='A' && str[i]<='Z'||(str[i]>='0'  &&  str[i]<='9'))
        {
           str[i]=str[i]+32;
        }
        i++;

    }
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    fun(str);
    printf("%s",str);
}