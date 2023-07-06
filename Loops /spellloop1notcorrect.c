#include <stdio.h>

int main () 
{ 
	int n;
	int magicnum;
	scanf("%d", &magicnum); 
		for (n = 1; n <= magicnum; n++) { 
			if (n == magicnum) {
			break; } 
			printf("%d Abracadabra\n", n); 
		} 
return 0;
}
