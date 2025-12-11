#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("loading");
    printf("[");
    for(int i=0;i<=100;i++)
    {
        
        printf("-");
        fflush(stdout);
        sleep(1);
    }
    printf("]");
}