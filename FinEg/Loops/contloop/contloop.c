#include <stdio.h>

int main () {
	int i = 0;
	while (i < 8) {
	if (i == 5) 
	{ i++; 		// forgot i++ and { } in line 6 and line 9 //
	continue; }		// wrong position declaration of { } //
		printf("%d\n", i);
		i++; 
	} return 0;
}
