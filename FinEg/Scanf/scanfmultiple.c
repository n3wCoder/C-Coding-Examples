#include <stdio.h>

int main () {
	int num1;
	char char1;
	
	printf("Type a number and a char & press enter: \n");

	scanf("%d %c", &num1, &char1); // dont add a , after the first format specifier //

	printf("Yr num is: %d\n", num1);
	printf("Yr char is: %c\n", char1);

return 0;
}
