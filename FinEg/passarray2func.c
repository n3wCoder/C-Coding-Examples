#include <stdio.h>

// Declare unique func //
void myFunc(char myWord[]) {
	for (int i =0; i < 5; i++) {
		printf("%c", myWord[i]);
		}
	return 0; // for void type, no need return 0, but it will still compile&run //
}

// Main Func //

int main () {
	char myWord[] = {'H','e','l','l','o'};
	myFunc(myWord); // only forgot this //
	printf("\n");
return 0;
}
