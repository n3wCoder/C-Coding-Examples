#include <stdio.h>

int main () 
{ 
	FILE *fptr;
	// Open file in read mode , fopen only accepts 1 argument// 
	fptr = fopen("filename.txt","r"); // r argument will not create a new file//
	
	// Store content of file //
	char myStr[100];

	// Read content & store inside myStr //
	fgets(myStr, 100, fptr);

	// Print file content //
	printf("%s", myStr);

	// Close file //
	fclose(fptr);

	return 0;
}
