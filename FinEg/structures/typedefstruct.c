#include <stdio.h>
#include <string.h>

/* Declare Global Var */

typedef struct sandwich {
  char bread[15];
  char sauce[15];
  char meat[15];
  char cheese[15];
} sandwich;

int main() {
	sandwich sandwich1;

	strcpy( sandwich1.bread, "White");
	strcpy( sandwich1.sauce, "None");
	strcpy( sandwich1.meat, "Beef");
	strcpy( sandwich1.cheese, "Cheddar");

	sandwich sandwich2;
	
	strcpy( sandwich2.bread, "White");
	strcpy( sandwich2.sauce, "Mayo");
	strcpy( sandwich2.meat, "Fish");
	strcpy( sandwich2.cheese, "Cheddar");

	printf( "Sandwich 1 Top: %s\n", sandwich1.bread);
	printf( "Sandwich 1 Sauce: %s\n", sandwich1.sauce); 
	printf( "Sandwich 1 Meat: %s\n", sandwich1.meat); 
	printf( "Sandwich 1 Topping: %s\n", sandwich1.cheese); 

	printf( "Sandwich 2 Top: %s\n", sandwich2.bread);
	printf( "Sandwich 2 Sauce: %s\n", sandwich2.sauce); 
	printf( "Sandwich 2 Meat: %s\n", sandwich2.meat); 
	printf( "Sandwich 2 Topping: %s\n", sandwich2.cheese); 

	return 0;
}
