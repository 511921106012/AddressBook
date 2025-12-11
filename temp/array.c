#include<stdio.h>
void jo(int ptr1[] ,int s1)
{
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&ptr1[i]);
    }
}
void ujohn(int ptr1[],int s1,int ptr2[],int s2,int ptr3[],int *s3)
{
    for(int i=0;i<s1;i++)
    {
        ptr3[*s3]=ptr1[i];
        (*s3)++;


    }
    for(int i=0;i<s2;i++)
    {
        int flag=0;
        for(int j=0;j<(*s3);j++)
        {
            if(ptr2[i]==ptr3[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ptr3[*s3]=ptr2[i];
            (*s3)++;
        }

    }

}
             
int main()
{
    int s1,s2,s3=0;
    printf("enter the size1");
    scanf("%d",&s1);
    printf("enter the size 2");
    scanf("%d",&s2);
    int arr1[s1];
    int arr2[s2];
    int arr3[s1+s2];
    jo(arr1,s1);
    jo(arr2,s2);

    ujohn(arr1,s1,arr2,s2,arr3,&s3);

    for(int i=0;i<s3;i++)
    {
        printf("%d",arr3[i]);
    }
}