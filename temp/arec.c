#include<stdio.h>
void(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
}
void pr(int *arr,int size)
{
    if(size>=0)
    {
        pr( arr,size-1)
        printf("%d",arr[size]);
    }
}
int main()
{
    int size;
    int arr[size];
    sc(arr,size);
    pr(arr,size)
}