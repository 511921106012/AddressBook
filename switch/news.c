#include<stdio.h>
int main()
{
    char op;
    scanf("%c",&op);
    switch (op)
    {
    case 'N':
    case 'n':
    printf("it is north");
    break;
    case 'E':
    case 'e':
    printf("it is east");
    break;
    case 'W':
    case 'w':
    printf(" it is west");
    break;
    case 'S':
    case 's':
    printf("it is south");
    
    default:
    printf("Invalid input");
        break;
    }
}