#include<stdio.h>
int  fun (char *str)
{
    int i=0;
    int count=0;
    while(str[i])
    {
        if ((str[i]>='0') && (str[i]<='9'))
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    int ret=fun (str);
    printf(" the constans is %d",ret);
    
}