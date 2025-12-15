#include<stdio.h>
#include <string.h>
void fun(char *str1,char *str2)
{
    // int i=0;
    // while(str1[i])
    // {
    //     char temp;
    //     temp=str1[i];
    //     str1[i]=str2[i];
    //     str2[i]=temp;
    //     i++;

    // }
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

}



int main()
{
    char str1[50];
    char str2[50];
    printf("enter the str 1");
    scanf("%s",str1);
    getchar();
    printf("enter the str2");
    scanf("%s",str2);
    fun(str1,str2);
    printf("%s\n",str1);
    printf("%s",str2);
}