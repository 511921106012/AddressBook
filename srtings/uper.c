#include<stdio.h>
void john(char *str)
{
    int i=0;
    while(str[i])
    {
        if ((str[i]>='a' && str[i]<='z')|| (str[i]>='0' && str[i]<='9'))

        {
            if(str[i]>='a' && str[i]<='z')
            {
            str[i]=str[i]-32;
            }

        }
        i++;
    }
    
    
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    john(str);
    printf("%s",str);
    return 0;
}