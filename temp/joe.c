#include<stdio.h>
int john(int n,int m)
{
    if(m>0)
    {
        return n*john(m-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int n,m;
    scanf("%d %d ",&n,&m);
    int ret = john(n,m)
    printf("%d",ret);
}