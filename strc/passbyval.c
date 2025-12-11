#include<stdio.h>
struct jo
{
    int id ;
    float grade;
    char name [20];

};
void read_ (struct jo *fun)
{
    scanf("%d %f %s",&fun->id,&fun->grade,fun->name);
}
void  print (struct jo *fun)
{
    printf("%d %f %s",fun->id,fun->grade,fun->name);
}
int main()
{
    struct jo fun;
     read_(&fun);
    print (&fun);





}