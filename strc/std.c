#include<stdio.h>
#include<string.h>
struct john
{
    int id;
    float grade;
    char name[20];

};
int main()
{
    struct john s1={10,20.5,"johnson"};
    scanf("%d %f %s",&s1.id,&s1.grade,s1.name);
    printf(" id is :%d\n",s1.id);
    printf(" his grade is:%f\n",s1.grade);
    printf(" he neme is :%s",s1.name);
}       