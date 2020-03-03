#include <stdio.h>
#include <stdlib.h>
#define nb_lines atoi(argv[1])
#define nb_columns atoi(argv[2])

int main(int argc, char const *argv[])
{
	unsigned int **tab;		//pointer on a [pointer on unsigned integers]
	int i, j;
	tab=(unsigned int**)malloc(nb_lines*sizeof(unsigned int*));
	for(i=0; i<nb_lines; i++)
		tab[i]=(unsigned int*)calloc(nb_columns, sizeof(unsigned int));

	for(i=0;i<nb_lines; i++)
	{
		for(j=0; j<nb_columns; j++)
			printf("%u ", tab[i][j]);
		printf("\n");
	}

	for(i=0; i<nb_lines; i++)
		free(tab[i]);
	free(tab);

	return 0;
}