#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100
#include<ctype.h>

typedef struct {//
    char name[50];
    char phone[20];
    char email[50];
} Contact;// contect  sore all things like name,phone,mail.

typedef struct {
    Contact contacts[100];
    int contactCount;// sotre tha contect 
} AddressBook;//store address book


void createContact(AddressBook *addressBook);
void searchContact(AddressBook *addressBook);
void editContact(AddressBook *addressBook);
void deleteContact(AddressBook *addressBook);
void listContacts(AddressBook *addressBook);
void initialize(AddressBook *addressBook);
void saveContactsToFile(AddressBook *AddressBook);



int validname(AddressBook *addresBook,char *name);
  int validphone(AddressBook *addresBook,char *phone);
   int validmail(AddressBook*addressBook,char *email);

#endif

