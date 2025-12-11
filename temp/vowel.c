#include<stdio.h>
int vowel(char *str )
{
    int i=0,count=0;
    char *vowel="vowel";
    while(str[i]!=0)
    {
        if(str[i]==vowel[i]||str[i]-32==vow[i]||str[i]+32==vow[i])
        
        {
            count ++;
            

        }

    }

}
int main()
{
    char *str1="hellohowaretou";
    int *ret=vowel(str);
    printf("no of vovewls %d",ret);
}