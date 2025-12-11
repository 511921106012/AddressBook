#include<stdio.h>
void fun (char *str)
{
    int i=0;
    while(str[i])
    {
        i++;

}
int st=0,end =i-1;
while(st<end)
{
    char t=str[end];
    str[end]=str[st];
    str[st]=t;
    end--;
    st++;
}
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    fun (str);
    printf("%s",str);
}