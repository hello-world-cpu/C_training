#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char **argv)
{
	int a, b, c;

	printf("Enter 1st number:\n");
	scanf("%d", &b);
	printf("Enter 2nd number:\n");
	scanf("%d", &c);
	a=mult(b, c);
	printf("b*c=%d\n", a);

	return(EXIT_SUCCESS);
}