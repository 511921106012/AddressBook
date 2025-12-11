#include<stdio.h>
int john(int n,int m)
{
    int i=1;
    if(m>n)
    {
        i=m;

    }
    else
    {
        i=n;
    }
    if(n==0||m==0)
    {
        return 0;
    }
    while(1)
    {
        if(i%n==0 && i%m==0 )
        {
            return 1;
            
        }
        i++;
        if(i>n*m)
        {
            break;
        }
    
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ret = john( n,m );
    if(ret==1)
    {
        printf(" it is lcd number");
    }
    else{
        printf("it is not lcd number");
    }
}