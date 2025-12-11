#include <stdio.h>

//void reverse_recursive(char str[], int ind, int len);
//int  string_count(char *str);

int main()
{
    char str[30];
    
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    int  count=string_count(str);  //count the string(index)
    
    reverse_recursive(str, 0, count);
    
    printf("Reversed string is %s\n", str); // call reverse function
}

//count the string index
int  string_count(char *str)
{
    int i=0;
    while(str[i++]!=0);
    return i-2;
}


void reverse_recursive(char str[], int ind, int len)
{
   // 0 check next 6>=4 now  its fail and return.
   if(ind>=len)
   return;
   
     char temp=str[ind];
     str[ind]=str[len];
     str[len]=temp;
     
     reverse_recursive(str,ind+1,len-1);
}