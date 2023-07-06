#include <stdio.h>

int main() {
char matrix[2][2] = { {'a','b'}, {'c','d'} };
int i, j;
for (i=0; i<2; i++) { // did not use ; for first 2 conditions //
	for (j=0;j<2; j++) { // did not use ; for first 2 conditions //
		printf("%c\n", matrix[i][j]); }
	}
return 0;
}
