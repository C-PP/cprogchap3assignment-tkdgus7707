#include <stdio.h>
void function(float weight);
/* ANSI/ISO C function prototyping */
int main(void) {
	float weight;    /* user weight             */

	printf("Enter a floating-point value: ");/*get input from the user                     */
	scanf("%f", &weight);      /* assume platinum is $1700 per ounce          */
	printf("fixed-point notation: %f\n", weight);
	function(weight);
	getchar();
	return 0;
}

void function(float weight)       /* start of function definition */
{
	printf("fixed-point notation: %f\n", weight);
	printf("exponential notation: %e\n", weight);
	printf("p notation: %.2a\n", weight);
	system("pause");
	return;
}