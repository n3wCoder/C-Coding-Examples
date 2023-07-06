#include <stdio.h>

// Declare func//
int sum(int k) {
	 		if (k > 0) { // forgot () dont put ; here as it is a condition //
			return k + sum(k -1);
			} else {
			return 0;
	}
}
// Main Func //
int main () {
	int k = 3;
	int result = sum(k); // new variable to store result of sum //
	printf("%d\n", result);
	return 0;
}

