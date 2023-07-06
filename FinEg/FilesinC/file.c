#include <stdio.h>

int main () 
{ 
	FILE *fptr;
	// Open file in writing mode //
	fptr = fopen("filename.txt", "w");
	// Write intended text to file //
	fprintf(fptr, "change");
	// Close file //
	fclose(fptr);

	return 0;
}
