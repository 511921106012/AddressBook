#include<stdio.h>
void fun(char *str)
{
    int i=0;
    while(str[i])
    { 
        int j=i+1;
        while(str[j])
        {
        if(str[i]==str[j])
        {
            int k=i;
            while(str[k])
            {
                str[k]=str[k+1];
                k++;
            }
            i--;
        }
        j++;

    
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