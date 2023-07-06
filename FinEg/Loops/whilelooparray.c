#include <stdio.h>

int main () {
	char table[3]={'a','b','c'};
	int i = 0;		
		while (i<3) // dont put int = 0 here because i will always be 0, & it wont work at all //
		{
		printf("%c", table[i]) ;
		i++ ;}
		{printf("\n");}  
	return 0;
}
