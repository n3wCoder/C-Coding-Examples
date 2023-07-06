#include <stdio.h>
#include <string.h>

int main () {
	char fullName[30];
		printf("Type full name please: \n");

		fgets(fullName, sizeof(fullName), stdin);

		printf("Hello %s", fullName);

return 0;
}
