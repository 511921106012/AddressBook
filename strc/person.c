#include<stdio.h>
struct john
{
    int id ;
    float grade;
    char name[20];

};
int main()
{
    int size;
    printf("enter the no of student\n");
    scanf("%d",&size);
    struct john srr[size];
    printf("enter the student details: \n");
    for (int i=0;i<size;i++)
    {
        scanf("%d %f %s\n",&srr[i].id,&srr[i].grade,srr[i].name);

    }
    for(int i=0;i<size;i++)
    {
    printf("%d %f %s\n",srr[i].id,srr[i].grade,srr[i].name);
    }

}