//fgetc()– This function is used to read a single character from the file.
//fgets()– This function is used to read strings from files.
//fscanf()– This function is used to read formatted input from a file.
//fread()– This function is used to read the block of raw bytes from files. This is used to read binary files.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    FILE* ptr;
    char ch;
 
    ptr = fopen("test.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);
    return 0;
}