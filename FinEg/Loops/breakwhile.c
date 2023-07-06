#include <stdio.h>

int main () {
	int i = 0;
	while ( i < 6) { // note no ; after condition declared in line 5 and 6 //
		if (i == 3) {
		  break;
		 }
		printf("%d\n", i);
		i ++;
		}
	return 0;
}
