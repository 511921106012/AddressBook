#include<stdio.h>
#include<string.h>
int main()
{
     
    FILE *fptr=fopen("a.1", "r+"); 
    char buffer[100]; 
    char serach[] = "cat";
    while((fscanf(fptr, "%s", buffer)) !=EOF) 

    {
        if(!strcmp(buffer, serach)) 
        {
           int size = strlen(buffer); 
           fseek(fptr, -size, SEEK_CUR); 
           fprintf(fptr, "%s", "dog"); 

        }
    }
 


// Close the file after reading
    fclose(fptr); 
    return 0; 
}
// This code reads a file named "a.1", searches for the word "cat",
// and replaces it with "dog". It uses `fscanf` to read each word,
// checks for a match with "cat", and if found, uses `fseek` to
// move the file pointer back to the start of the word to replace it.
// The file is then closed after the operation is complete.
// Note: Ensure that the file "a.1" exists and contains the word "cat           
//" for the code to work correctly. The file should be opened in "r+" mode
// to allow both reading and writing. The buffer size should be sufficient
// to hold the words being read. The `fseek` function is used to move the
// file pointer back to the position of the word "cat" before writing "dog".
// The `fprintf` function is used to write the new word "dog" into the file

// at the correct position. The code assumes that the word "cat" is not
// part of a larger word (e.g., "catalog") and will only replace exact matches
// of "cat". If the word "cat" appears multiple times in the file, it
// will replace all occurrences with "dog". The code does not handle cases
// where the word "cat" is at the end of a line or if there are multiple
// spaces between words. It also does not handle cases where the word "cat"
// is followed by punctuation marks. If the word "cat" is not found in the file

// the file will remain unchanged. The code does not check for errors when
// opening the file or reading from it. If the file does not exist or cannot
// be opened, the program will terminate without performing any operations.
// It is recommended to add error handling to ensure the file is opened successfully
// and to handle cases where the word "cat" is not found in the file.
// Additionally, the code does not handle cases where the word "dog" is longer
// than "cat". If "dog" is longer, it may overwrite subsequent characters in the
// file, leading to data loss. To avoid this, ensure that the replacement word
// is of the same length or shorter than the word being replaced. If the replacement
// word is shorter, the remaining characters will remain unchanged, which may
// lead to unexpected results. It is also important to note that this code does not
// handle cases where the file is empty or contains only whitespace. If the file
// is empty, the program will terminate without performing any operations.
// If the file contains only whitespace, the program will read until EOF without
// finding any words to replace. In such cases, the file will remain unchanged.
// To improve the code, consider adding error handling for file operations,                 
// checking for the existence of the word "cat" before attempting to replace it,
// and ensuring that the replacement word is of the same length or shorter than
// the word being replaced. Additionally, consider handling cases where the file
// is empty or contains only whitespace to ensure the program behaves as expected
// in all scenarios. This will make the code more robust and reliable for various               
// file contents and conditions. It is also a good practice to include comments
// in the code to explain the purpose of each section and to make it easier for
// others (or yourself in the future) to understand the logic and flow of the program.
// This will enhance the readability and maintainability of the code, especially
// if it is part of a larger project or if it will be revisited after some time.
// Overall, the code provides a basic implementation for replacing a word in a file,