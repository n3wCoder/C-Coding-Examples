#include <stdio.h>
#include <string.h>

int main () {
char str1[] = "Coding is"; // include spacing if needed//
char str2[] = " meticulous!\n";

// Concatenate str2 to str 1 //
strcat(str1, str2);

printf("%s", str1); // print out the new str1 //

return 0;
}
