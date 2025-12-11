#include<stdio.h>
int main()
{
    int x= 11;
    char*ptr =(char*) &x;
    if(*ptr== 11)
    {
        printf(" big");
    }
    else{
        printf("littele");
    }
}