#include <stdio.h>

int main () 
{ 
	FILE *fptr;
	// Open file in read mode //
	fptr = fopen("filename.txt","r");
	
	// Store content of file //
	char myStr[100];

	// If file exist //
	if(fptr != NULL) {
		// Read content,store inside myStr & print it//
		while (fgets(myStr, 100, fptr)) {
			printf("%s", myStr);}
	} else {		
		printf("\nUnable to open, no such file.");
	}
	// Close file //
	fclose(fptr);

	return 0;
}
