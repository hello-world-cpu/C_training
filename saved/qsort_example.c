#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define newline printf("\n")
#define nb_elements 10		//give nb_elements strings in arguments

void print_tab1(int *, int);
void print_tab2(char **, int);
/*the 4th argument of qsort has to be of type int (*)(const void*, const void *).
Therfore we cast to int * (or char **) inside the function (see lines 30, 31, 37, 38)*/
int comp_int(const void *, const void *);
int comp_str(const void *, const void *);

void print_tab1(int *p, int nb)
{
	for(int i=0; i<nb; i++)
		printf("%d\n", p[i]);
}

void print_tab2(char **tab, int nb)
{
	for(int i=0; i<nb; i++)
		printf("%s\n", tab[i]);
}

int comp_int(const void *op1, const void *op2)
{
	int *a=(int *)op1;
	int *b=(int *)op2;
	return(*a-*b);
}

int comp_str(const void *op1, const void *op2)
{
	char **s1=(char **)op1;
	char **s2=(char **)op2;
	return(strcmp(*s1, *s2));
}

int main(void)
{
	int i;
	int *tab1;
	char *tab2[nb_elements]={"skateboard", "Truck", "Car", "roller", "Scooter", "kickboard", "Train", "Plane", "bike", "Motorbike"};

	tab1=(int *)malloc(nb_elements*sizeof(int));
	/*seeding the random number generator with the current time, otherwise rand() is automatically seeded with the a value of 1 if you
	do not call srand()*/
	srand(time(NULL));
	for(i=0; i<nb_elements; i++)	
		tab1[i]=rand()%1000;	//random integer between 0 and 1000

	newline;
	print_tab1(tab1, nb_elements);
	newline;
	print_tab2(tab2, nb_elements);
	newline;

	qsort(tab1, nb_elements, sizeof(int), comp_int);
	newline;
	print_tab1(tab1, nb_elements);
	qsort(tab2, nb_elements, sizeof(char *), comp_str);
	newline;
	print_tab2(tab2, nb_elements);

	return EXIT_SUCCESS;
}