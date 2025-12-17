#include<stdio.h>
#include<string.h>
// reverse the string using file handling
int main()
{
    FILE *fptr=fopen("revstr.c", "r+"); // Open the file in read mode
    char buffer[100]; // Buffer to hold each line
    int large = 1; 
    char large[100]; // Buffer to hold the largest line

    
    while((fscanf(fptr, "%s", buffer)) !=EOF) // Read each line until EOF

    {
        if(large > large) // Check if the line is the first line
        {
            large =  s; // Set large to 0 to indicate that the first line has been processed
             strcpy(large, buffer); // Copy the first line to large;


          
        }
        else if(strlen(buffer) > strlen(large)) // Check if the line is larger than the current largest line
        {
            strcpy(large, buffer); // Copy the current line to large
        }
        else // If the line is not larger than the current largest line
        {
            // Do nothing, continue to the next line    





       
    }
    fclose(fptr); // Close the file after reading
    return 0;
}
}