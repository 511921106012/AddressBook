#include<stdio.h>
#include<string.h>
struct j
{
    int id;
    char name[10];
    char email[20];
    char address[50];

};
void read (struct j *arr,int size)
{
    printf("enter the details\n");
    for(int i=0;i<size;i++)
    {
     printf("enter the stduent id : ");
     scanf("%d",&arr[i].id);
     printf("enter the student name: ");
     scanf(" %[^\n]",arr[i].name);
     printf("enter the email: ");
     scanf(" %[^\n]",arr[i].email);
     printf("enter the address:");
     scanf(" %[^\n]",arr[i].address);


    }

}
void prin(struct j *arr,int size)
{
    for(int i=0;i<size;i++)


    printf("%d\n%s\n%s\n%s\n",arr[i].id,arr[i].name,arr[i].email,arr[i].address);
}
void serach_by_name(struct j *arr,int size)
{
    printf("enter the student name : ");
    char str1[50];
    scanf(" %[^\n]",str1);
    for(int i=0;i<size;i++)
    {
        if(strcmp(str1,arr[i].name)==0)
        {
            printf("%d\n%s\n%s\n%s\n",arr[i].id,arr[i].name,arr[i].email,arr[i].address);
            return ;
        }
        
    }
    printf("name not fount madaya\n");




}
void ID(struct j *arr,int size)
{
    printf("enter the ID : ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<size;i++)
    {
    if(n==arr[i].id)
    {
        printf("%d\n%s\n%s\n%s\n",arr[i].id,arr[i].name,arr[i].email,arr[i].address);

        return ;


    }
}
printf("The id is not is there madaya");.
        

    
}

    

int main()
{
    int size;
    printf("enter the no of students: ");
    scanf("%d",&size);

    struct j arr[size];

    

    read (arr,size);
    // prin (arr,size);
    int op;
    
    do
    {
        printf("\n\n");
        printf("1. Print all details\n");
        printf("2. Search by name\n");
        printf("3. search by ID\n");
        printf("4. Exit\n");
        printf("Enter the choice:");
        scanf("%d",&op); 

        switch(op)
    {
        case 1:
        prin(arr,size);
        break;
        case 2:
       // printf("enter the student name");
        serach_by_name(arr,size);
        break;
        case 3:
        ID (arr,size);
        break;
        

    }
       
    } while (op !=4);
    
    
   
    // switch(op)
    // {
    //     case 1;
    //     print(&arr,size);
    //     break;
    //    /* case 2;
    //     print1(&arr,size)*/

    // }

    
}