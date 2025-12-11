#include<stdio.h>
int main()
{
   int i,n,fac;
    fac=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;

    }
    printf("the fact nnumber is %d\n",fac);
}
