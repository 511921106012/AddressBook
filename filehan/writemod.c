#include<stdio.h>
int main()
{
    FILE * fp=fopen("a.1","w");
    fputc('a',fp);
    fclose(fp);
}