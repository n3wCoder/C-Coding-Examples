#include <stdio.h>

int main () 
{ 
	FILE *fptr;
	// Open file in append mode //
	fptr = fopen("filename.txt", "a");
	// Write intended text to file //
	fprintf(fptr, "\nNew file.");
	// Close file //
	fclose(fptr);

	return 0;
}
