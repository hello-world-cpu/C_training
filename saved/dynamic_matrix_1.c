#include <stdio.h>
#include <stdlib.h>

#define nb_lines 5
#define nb_columns 10

int main(void)
{
	int **tab;

	tab=(int **)malloc(nb_lines*sizeof(int *));
	for(int i=0; i<nb_lines; i++)
	{
		*(tab+i)=(int *)calloc(nb_columns, sizeof(int));
	}

	for(int i=0; i<nb_lines; i++)
	{
		for(int j=0; j<nb_columns; j++)
		{
			printf("%d ", *(*(tab+i)+j));
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}