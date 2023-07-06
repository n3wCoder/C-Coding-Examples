#include <stdio.h>

int main () {
	int i = 0;
	while ( i < 8) { 
		if (i == 5) { // missing {} & i++ in line 6, will only cause it //  
		  continue;  // to print up to i = 4 and the loop to not end //
		 }
		printf("%d\n", i);
		i ++;
		}
	return 0;
}
