#include<stdio.h>
#include<string.h>

// Create new structure variable //
struct myStruct {
	int age;
	char letter;
	char Name[30]; // String
};

int main () {
	// Create new structure variable of myStruct & assign values to members of s1 //
	struct myStruct s1 = {12, 'J', "John"};

	// Create another struct variable, s2 and copy s1 values to it //
	struct myStruct s2 = s1;

	// Modify value //
	s2.age = 14;
	s2.letter = 'A';
	strcpy(s2.Name, "Audrey");

	// Print values //
	printf("%d %s %c\n", s1.age,s1.Name,s1.letter); // Printing multiple values of S1 in 1 statement //

	printf("My letter : %c\n", s2.letter);
	printf("My age : %d\n", s2.age);
	printf("My name : %s\n", s2.Name);

	return 0;
}
