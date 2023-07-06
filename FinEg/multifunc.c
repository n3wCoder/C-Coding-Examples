#include <stdio.h>

// Declare unique functions //
void myFunc (char name[], int age) {
	printf("Hi %s. You are %d years old. \n", name, age);
}

// Declare unique func under main function //

int main () {
	myFunc("John", 3); // Ensure correct values & formatting //
	myFunc("Joe", 5);

	return 0;	
}
