#include<stdio.h>
int main()
{
    char op;
   scanf("%c",&op);
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
    }
}