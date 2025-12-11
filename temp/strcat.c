#include<stdio.h>
char *my_strcat(char *des,const char *src)
{
    int i=0;
    while(des[i++]!='\0');
    
        //str2[i]=str1[i];
        i=i-1;
        int j=0;
    while(des[i++]=src[j++]);
    return des;
}
int main()
{
    char str1[50]="hello";
    char str2="hello";
    char *ret=my_strcat(str1,str2)
    printf("%s",str1);
    printf("%s",ret);
}