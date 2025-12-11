#include<stdio.h>
char* substr(char* s,char* c)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        j=0;
        if(s[i]==c[j])
        {
            char* n=s+i;
            i++;j++;
            while(c[j]!='\0')
            {
                if(s[i]==c[j])
                {
                    i++;j++;
                }
                else
                {
                    break;
                }
            }
            if(c[j]=='\0')
            {
                return n;
            }
        }
        i++;
    }
    return NULL;
}
int main()
{
    char str[50];
    char str1[50];
    printf("Enter the main string :");
    scanf("%[^\n]",str);
    printf("Enter the sub string :");
    scanf(" %[^\n]",str1);
    char* ret=substr(str,str1);
    if(ret==NULL)
    {
        printf("sub string is not found");
    }
    else
    {=
        printf("%s",ret);
    }
}
