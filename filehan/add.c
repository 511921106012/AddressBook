#include<stdio.h>
int main()
{
    FILE * fptr=fopen("a.1","r");
    int n1 ,n2,n3;
    fscanf(fptr,"%d %d %d",&n1,&n2,&n3);
    printf("%d\n",n1+n2+n3);
    fclose(fptr);
}