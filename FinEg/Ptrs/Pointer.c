#include <stdio.h>

int main () {
	int myAge = 26;
	int* age = &myAge;

	printf("Age is %d\n", *age); // Print age value //

	printf("Pointer address of myAge is %p\n", &myAge); // Print pointer value

	printf("%p\n", age); // Print memory address of myAge using pointer 
return 0;
}
