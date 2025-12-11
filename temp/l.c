#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=0;
    int sum=0;
    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        n=n/10;

    }
    printf("%d",sum);
}