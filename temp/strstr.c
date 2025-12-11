#include<stdio.h>
//#include<string.h>

char *my_strstr(const char *main,const char *sub)
{
    int i=0;
    while(main[i])
    {
        if(main[i]==sub[0])
        {
            int j=i+1;
            int k=1;
            int flag=0;
            while(sub[k] !='\0')
            {
                if (main[j] !=sub[k])
                {
                    flag=1;
                    break;
                }
                j++;
                k++;
            }
            if(flag==0)
            {
                return &main[i];
            }
        }
        i++;
    }
}
int main()
{
    char *str="hellohowAreyouRewhyareyou";
    char *s="are";
    char *ret=my_strstr(str,s);
    if(ret != NULL)
    {
        printf("%s",ret);
    }
    else
    {
        printf("it is not equal");
    }

}