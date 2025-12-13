#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
//#include "file.h"
#include "populate.h"


void listContacts(AddressBook *addressBook) 
{
    for(int i=0;i<addressBook->contactCount;i++)
    {
        printf("%s      ",addressBook->contacts[i].name);
        printf("%s      ",addressBook->contacts[i].phone);
         printf("%s\n",addressBook->contacts[i].email);
    }
    // Sort contacts based on the chosen criteria
    }

void initialize(AddressBook *addressBook) {
    addressBook->contactCount = 0;
    populateAddressBook(addressBook);
    
    // Load contacts from file during initialization (After files)
    //loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) {
    saveContactsToFile(addressBook); // Save contacts to file
    exit(EXIT_SUCCESS); // Exit the program
}


void createContact(AddressBook *addressBook)
{
   char name[20];
   int ret;
    ret=  validname(addressBook,name);
  while(ret != 1)
     {
           validname(addressBook,name);
    }
    char phone[15];
 ret=validphone(addressBook,phone);
char mail[50];
ret = validmail(addressBook,mail);
while(ret!=1)
{
     validmail(addressBook,mail);

}

  



    

	/* Define the logic to create a Contacts */
    
}

void searchContact(AddressBook *addressBook) 
{
    int chosse;
    do{
        //printf("enter the searches : \n");
        printf("1 : choose the name \n");
        printf("2 : choose the phone \n");
        printf("3 :choose the email \n");
        scanf("%d",&chosse);
        switch (chosse)
        {
        case 1:
        {
           searchname(addressBook);
              break;
        }
        case 2:
           searchphone(addressBook);
       break;
       case 3:
       {
        searchemail(addressBook);
       }
       break;
        
        default:
            break;
        }
        

    }while(chosse!=3);
    
    
    

}

void editContact(AddressBook *addressBook)
{
     int chosse;
    do{
        //printf("enter the searches : \n");
        printf("1 : edit  the name \n");
        printf("2 : edit  the phone \n");
        printf("3 : edit the email \n");
        scanf("%d",&chosse);
        switch (chosse)
        {
        case 1:
        {
           editname(addressBook);
              break;
        }
        case 2:
           searchphone(addressBook);
       break;
       case 3:
       {
        searchemail(addressBook);
       }
       break;
        
        default:
            break;
        }
        

    }while(chosse!=3);
    

    


	
    
}

void deleteContact(AddressBook *addressBook)
{
	/* Define the logic for deletecontact */
   
}


// name using funtion definition:
int validname(AddressBook *addresBook,char *name)
{
    
    printf("enter the name:");
    scanf(" %[^\n]",name);
    for(int i=0;name[i];i++)
    {
       if( isalpha(name[i])==0 && name[i] != ' ')
       {
        printf("name shoud contain only alphabits\n");
        return 0;
       }
     }
    return 1;
   }


 int validphone(AddressBook *addresBook,char *phone)
    {
        printf("enter the mobile number : ");
        scanf(" %s",phone);
        
          if(strlen(phone)!=10)
            {
                printf("you should enter the only 10 characters\n");
                return 0;

            }

        for(int i=0;phone[i];i++)

        {
            if(isdigit(phone[i])==0)
            {
                printf("enter the number digit shoud be");
                return 0;
            }
          

        }
        for(int i=0;i<addresBook->contactCount;i++)
        {
            if (strcmp(phone,addresBook->contacts[i].phone)==0)
            {
                printf("number shoud be unique");
                return 0;
            }
            
        }
        return 1;

        

    }
    int validmail(AddressBook*addressBook,char *email)
    {
        // int i;
        //   char *p=".com";
        printf("enter the email :");
        scanf(" %[^\n]",email);

        while(!strchr(email,'@'))
         {
            
            printf("you shoud enter the @ in the mail");
            return 0;
            
        }
       // char *p=".com";
       while(!strstr(email,".com"))
       {
            printf("you shoud enter the .com");
            return 0;
       }
       char *ptr1=strchr(email,'@');
       char *ptr2=strstr(email,".com");
       ptr1--;
       ptr2--;
       if(!isalnum(*ptr1))
       {
        printf("you shoud enter the before @ alpha numaric");
        return 0;
       }
       if(!isalpha(*ptr2))
       {
        printf("shoud enter before .com alphabit only\n");
        return 0;
       }
       if (*(ptr2+5) != '\0')
       {
        printf("🤨 .com shoud be last man\n");
        return 0;
       }
       int count=0;
       
        for(int i=0;email[i];i++)
        {
            if(email[i]=='.')
            count++;

        }
        if (count!=1)
        {
        printf("😒 dai ebba oulga kudra dai\n");
        return 0;
        }
        // printf("sdfg\n");
        for(int i=0;i<addressBook->contactCount;i++)
        {
            if (strcmp(email,addressBook->contacts[i].email)==0)
            {
                printf("mail shoud be unique");
                return 0;
            }
            
        }
        return 1;
        
       



    //    while(!isalnum(email)<='@')
    //    {
    //     printf(" enter the mail before @ dont use .com \n");
    //     return 0;
    //    }
    //    while(!isalpha(email)<*p)
    //    {
    //     printf("Invalid domain name after '@'. Please enter a correct domain before '.com'.");
    //     return 0;
    //    }
        
        
        
        
       
    }


    int searchname(AddressBook *addressBook)
    {
        char name[50];
        int i,flag=0;
        printf("enter the name to search :");
        scanf(" %[^\n]",name);

        for( i=0;i<addressBook->contactCount;i++)
        {
            if (strcmp(name,addressBook->contacts[i].name)==0)
            {
                        printf("%s      ",addressBook->contacts[i].name);
        printf("%s      ",addressBook->contacts[i].phone);
         printf("%s\n",addressBook->contacts[i].email);
         flag=1;
            }

        }
        if(flag==0)
        {
            printf("contact not found\n");
            return -1;
        }
        return 1;

        
    }



      int searchphone(AddressBook *addressBook)
    {
        char phone[50];
        int i;
        
        printf("enter the phone to search :");
        scanf("%s",phone);

        for( i=0;i<addressBook->contactCount;i++)
        {
            if (strcmp(phone,addressBook->contacts[i].phone)==0)
            {
                        printf("%s      ",addressBook->contacts[i].name);
        printf("%s      ",addressBook->contacts[i].phone);
         printf("%s\n",addressBook->contacts[i].email);
         return 0;
         
            }

        }
        // if(i==addressBook->contactCount)
        // {
        //     printf("contact not found\n");
        //     return -1;
        // }
         printf("contact not found\n");
        return 1;






        
    }






    
      int searchemail(AddressBook *addressBook)
    {
        char email[50];
        int i;
        
        printf("enter the email to search :");
        scanf("%s",email);

        for( i=0;i<addressBook->contactCount;i++)
        {
            if (strcmp(email,addressBook->contacts[i].email)==0)
            {
                        printf("%s      ",addressBook->contacts[i].name);
        printf("%s      ",addressBook->contacts[i].phone);
         printf("%s\n",addressBook->contacts[i].email);
         return 0;
         
            }

        }
         printf("email not found\n");
        return 1;
    }


    // edit the contect ;
    
          int  editname(addressBook)
          {

          }
