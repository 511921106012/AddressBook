#include<stdio.h>
int main()
{
    char up,lw,dig,op;
    scanf("%c",&op);
    if(op>='A' && op<='Z')
    {
        op=1;
    }
    else if(op>='a' && op<='z')
    {
        op=2;
    }
    else if(op>='0' && op<='9')
    {
        op=3;
    }
    else
    {

    }
    switch(op)
    {
        case 1:
        printf("it is uppercase");
        break;
        case 2:
        printf("it is lower charachter");
        break;
        case 3:
        printf("it is digit charater");
        break;
        default:
        printf("Invalid input");
        break;
    }

}