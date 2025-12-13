#include<stdio.h>
int main()
{
     char name[100];
     char phone[20];
     char email[50];
     char ch;

     // REVERSE THE FILE READ MOOD//
     FILE * fptr=fopen("c.c","r");
     fseek(fptr,-1,SEEK_END);// go to  the end file after printing (ouy== like this
     int size=ftell(fptr);//total lenth store in tha size

     while(size>=0)// read panra value ellam - digit lea vanthudum.
     {
        ch =fgetc(fptr);
        fputc(ch,stdout);
        fseek(fptr,-2,SEEK_CUR);
        size--;
     }



















    /* FILE *fptr =fopen("c.c","r");
     fscanf(fptr,"  %[^,], %[^,],%[^\n]",name,phone,email);
     // printing reverse (like [you are how hello])









     printf("%s\n",name);
     printf("%s\n",phone);
     printf("%s",email);
     fclose(fptr);*/
}