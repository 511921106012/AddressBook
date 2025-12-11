#include<stdio.h>
void pjohn (int ptr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",ptr[i]);
    }
}
void sjohn(int ptr[] ,int size)
{
    for (int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
}
int main()
{
    int arr[5];
    sjohn(arr,5);
    pjohn(arr,5);

}