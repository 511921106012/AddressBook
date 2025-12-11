#include<stdio.h>
void fun();
int main()
{
    int n;
    printf("enter the elaments");
    scanf("%d",&n);
    int arr[n];
    fun(arr,n);
    printf("ithun da output");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}