#include<stdio.h>//read only one file to another file practcie time i am using in a.1 file i a 
/// using .

int main()
{
FILE * fptr=fopen("a.1","r");//read mode here using 
if(fptr==NULL)// fprt la i mean a.1 inum ilia na inga eathum ila nu soluraom

{
    printf("fiile la onum ila ");
    return 0;
}
char ch;// oru varibale declre panrom
int count =0;
while((ch=fgetc(fptr))!=EOF) //aproom chck pantoom 
{
   if(ch ==ch)
   {
    count++;
   }
}
printf("%d",count);
fclose(fptr);
}