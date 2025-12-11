#include<stdio.h>
int main()
{
    printf("enter the oprator");
    char op;
    scanf("%c",&op);
    printf("enter the value");
    int a,b;
    scanf("%d %d",&a,&b);
    switch(op)
    {
          case '+':
          printf("%d",a+b);
          break;
          case '-':
          printf("%d",a-b);
          break;
          case '*':
          printf("%d",a*b);
          break;
          case '/':
          printf("%d",a/b);
          break;
    }

}