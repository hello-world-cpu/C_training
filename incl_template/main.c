#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char **argv)
{
	int a, b, c;

	printf("Saisir 1er nombre:\n");
	scanf("%d", &b);
	printf("Saisir 2eme nombre:\n");
	scanf("%d", &c);
	a=mult(b, c);
	printf("b*c=%d\n", a);

	return(EXIT_SUCCESS);
}