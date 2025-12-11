#include<stdio.h>
#include<string.h>
struct fun
{
    int id;
    char name[50];
    char email[50];
    float salary;
};
int main()
{
    struct fun s1 ={};//04,"johnson.r","jothijohn843@gmail.com",50.000};
    printf("enter the user id : ");
    scanf("%d",&s1.id);
    printf("enter the user name : ");
    scanf("%s",s1.name);
    printf("enter the email : ");
    scanf("%s",s1.email);
    printf("enter the user salary : ");
    scanf("%f",&s1.salary);




    printf(" the user name is %d \n",s1.id);
    printf(" the user name is %s\n",s1.name);
    printf(" the user email is %s\n",s1.email);
    printf(" dai unooda salary is  %f",s1.salary);

}