// C Program to illustrate the strcat function 
#include <stdio.h> 

int main() 
{ 
	char dest[50] = "This is an"; 
	char src[50] = " example"; 

	printf("dest Before: %s\n", dest); 

	// concatenating src at the end of dest 
	strcat(dest, src); 

	printf("dest After: %s", dest);
	printf("Length: %d", strlen(dest));	
/* size_t length = strlen(str); 
 int result1 = strcmp(str1, str2); 
  strcpy(dest, source); 
   char* result = strchr(str, ch); 
 */	return 0; 
}
