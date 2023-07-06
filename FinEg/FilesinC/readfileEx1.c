#include <stdio.h>

int main () 
{ 
	FILE *fptr;
	// Open file in read mode //
	fptr = fopen("filename.txt","r");
	
	// Print text if file does not exist //
	if(fptr == NULL) {
	printf("No such file, unable to continue.\n");
	
	fclose(fptr); } else { // Both Ex will cause a segmentation fault //
		
	// Store content of file //
	char myStr[100];

	// Read content & store inside myStr //
	fgets(myStr, 100, fptr);

	// Print file content //
	printf("%s", myStr);
	}
	// Close file //
	fclose(fptr);

	return 0;
}
