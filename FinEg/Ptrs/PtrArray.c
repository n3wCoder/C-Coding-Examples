#include <stdio.h>

int main () {
	int myNum[] = {25, 50, 75, 100};
	int *p = myNum;
	
// Loop through using pointer *p //
	for (int i =0; i < 4; i++) {
	printf("%d\n", *(p+ i)); // the * should be outside of the bracket, not next to p //
	}

// Get memory address of myNum Array //
	printf("%p\n", &myNum);

// Get memory address of first array element //
	printf("%p\n", &myNum[0]);

// Change value of 3rd element to 5 //
	*(myNum+2) = 5;

// Get value of 1st array element //
	printf("%d\n", *myNum);

// Get value of 2nd array element //
	printf("%d\n", *(myNum+1));

// Get value of 3rd array element //
	printf("%d\n", *(myNum+2));

return 0;
}
