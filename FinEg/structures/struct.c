#include<stdio.h>
#include<string.h>

// Create new struct //
struct myStruct {
	int age;
	char letter;
	char Name[30]; // String
};

int main () {
	// Create new structure variable of myStruct //
	struct myStruct s1;

	// Assign values to members of s1 //
	s1.age = 12;
	s1.letter = 'J';
	strcpy(s1.Name, "John");

	// Print values //
	printf("My letter : %c\n", s1.letter);
	printf("My age : %d\n", s1.age);
	printf("My name : %s\n", s1.Name);

	return 0;
}
