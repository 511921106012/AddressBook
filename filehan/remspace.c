#include<stdio.h>
int main()
{
    FILE *fptr=fopen("c.c", "r");//
    if(fptr==NULL)// Check if the file opened successfully
      int falg=0;
      char ch;
      while((ch=fgetc(fptr))!=EOF)// Read characters until EOF
      {
          if(ch==' ' && falg==0)// If the character is a space and falg is 0// not printed yet
          {
              putc(ch, stdout); // Print the space
              falg=1; // Set falg to 1 to indicate a space has been printed// not printed yet
          }
          else if(ch==' ' && falg==1) // If the character is a space and falg is already 1// already printed
          {
              putc(' ', stdout);// Print a single space
              // Do not change falg, so it remains 1
              falg=1;// Keep falg as 1 to avoid printing multiple spaces
          }
          else if(ch!=' ')// If the character is not a space
          {
                putc(ch, stdout);// Print the character
              falg=0;// Reset falg to 0 to allow printing the next space if it occurs
          }
      }
      fclose(fptr);// Close the file after reading
      return 0;
    


}