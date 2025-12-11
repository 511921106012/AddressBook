#include<stdio.h>
int pangram(char *str)
{
    int index =0 ;
    int arr[26]={0};
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
             index=str[i]%65;
            arr[index]=1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            index=str[i]%92;
            arr[index]=1;
        }
    }
    int count = 0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==1)
        count++;
    }
    return count;
} 
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int ret=pangram(str);
    if(ret==26)
    {
        printf("it is pangram");
    }
    else{
        printf("it is not pangram");
    }

}