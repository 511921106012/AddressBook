#include<stdio.h>
int john(int n)
{
if(n>0)
{
    int ret= fun(n-1)*n;
    return ret*n;                   

}
else{
    return 1;
}
}
int main()
{
    int n;
    scanf("%d",&n);
    int ret=john(n);
    printf("%d",ret);
}