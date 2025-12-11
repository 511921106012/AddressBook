#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("a is a greater\n");
            
        }
        else
        {
            printf("c is a grater\n");
        }

    }
    else{
        if(b>a)
        {
            printf("b is a greater\n");
        }
    }
  

}