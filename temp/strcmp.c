#include<stdio.h>
int my_strcmp( char *str1,char *str2)
{
    int i=0;
    while(str1[i]==str2[i]||str1[i]+32 ==str2[i]||str2[i]-32 == str1[i])
    {
        if(str1[i]==0)
        {
            return 0;
        }
    }
    return str1[i]-str2[i];

}
int main()
{
    char *str1="hEllo";
    char *str2="HelLo";
    int ret=my_strcmp(str1,str2);
    if(ret==0)
    {
        printf("it is equal");
    }
    else
    {
        printf("it is not equal");
    }
}