#include<stdio.h>
void john(char *str,int num)
{
    //int num;
    int i=0;
    while(num!=0)
    {
        int rem=num%10;
        str[i]=rem+48;
        i++;
        num=num/10;

        
    }
    int st=0,end=i-1;
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
    int n;
    char str[50];
    printf("enter the nuber");
    scanf("%d",&n);

    john(str,n);
    printf("the i to a is %s",str);

}