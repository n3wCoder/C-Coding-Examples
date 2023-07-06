#include <stdio.h>

// Declare global variables //

/* Main Function */

float main () {
	float n[6] = {0, 1, 2.2, 3, 4, 5}; // Array //
	int x = n[1]; // Assigning 2nd table value // 

	int *y;
	y = &x;

	float a = n[2]; // Assigning 3rd table value // 
	float *b;
	b = &a;


	float totalofBoth = (float) *y + *b; // Explicit conversion & precision //
	printf(" The total of both is %.5f.\n\n New Line here.  \n",totalofBoth); //Adopt this coding style, note the spacing //

return 0;

}
