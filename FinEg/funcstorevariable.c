#include <stdio.h>

int myFunc(int x, int y) {
	return x + y;
}

int main () {
	int result = myFunc(2, 3); // forgot to declare new variable //
	printf("Your sum is %d\n", result);
	return 0;
}
