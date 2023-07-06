#include <stdio.h>

int main() {

	char name[30]; // add a [] after variable "name" for strings & its size in [] //
	int age;

		printf("Enter name please: \n"); 
		scanf("%s", name); // no need &name for name variable //

		printf("Next, age please: \n");
		scanf("\n%u", &age);

	printf("Thank you, %s, %u.\n", name, age);

return 0;
}
