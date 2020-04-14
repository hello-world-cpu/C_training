#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int prod(int, int);
int binary_operator(int, int, int (*)(int, int));

int sum(int a, int b)
{
	return(a+b);
}

int prod(int a, int b)
{
	return(a*b);
}

int binary_operator(int a, int b, int (*f)(int , int))
{
	return((*f)(a, b));
}

//./prog (op1) (p or f) (op2)

int main(int argc, char **argv)
{
	int a, b;
printf("argc = %d\n", argc);
	if(argc!=4)
	{
		fprintf(stderr, "Wrong number of arguments\n");
		return EXIT_FAILURE;
	}
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	if(*argv[2]=='p')
	{
		printf("%d\n", binary_operator(a, b, sum));
		return EXIT_SUCCESS;
	}
	if(*argv[2]=='f')
	{
		printf("%d\n", binary_operator(a, b, prod));
		return EXIT_SUCCESS;
	}

	//wrong value in argv[2] if we arrive at this point
	fprintf(stderr,"Wrong operator\n");
	return EXIT_FAILURE;
}