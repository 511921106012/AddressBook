#include<stdio.h>
void fun (char str[])
{
    
    int i=0;
    while(str[i])
    {
        int j=i+1;
        while(str[j])
        {
            
            if(str[i]==str[j])
            {
                int k=j;
                while(str[k])
                {
                    str[k]=str[k+1];
                    k++;
                }
                
                
            }
            else
            {
                j++;
            }
            
        }
        i++;
       

    }
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    fun(str);
    printf(" unique value is  %s  ",str);
}