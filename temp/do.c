#include<stdio.h>

void (int f,int s,int n)
{
    if(n)
    printf("%d",n);
    f=s;
    s=n;
    n=f+s;
    fun(f,s,n,limit)

}
int main()
{
    int limit;
    int f=0,s=1,n=0;
    scanf("%d",&limit);
    fun(f,s,n,limit)
}