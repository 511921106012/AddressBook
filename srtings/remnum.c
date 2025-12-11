#include<stdio.h>
void fun(char str[])
{
    int i=0;
    while(str[i])
    {
    
        if(str[i]>='0' && str[i]<='9')
            {
                int k=i;
                while(str[k])
                {
                    str[k]=str[k+1];
                    k++;
                }
                i--;
                

            }
            i++;
        
    }

}
int main()
{
    char str[50];
    scanf("%[^\n]",str);

     
    fun(str);
    printf(" number ila da mama ne coorect ha tha potu irukaa %s " ,str);

}