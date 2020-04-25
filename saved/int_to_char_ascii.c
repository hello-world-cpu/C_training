#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=65;
	char *p;

	p=malloc(4);
	p=(char *)&a;
	printf("%d\n", *p);
	printf("%c %d %d %d\n", *p, *(p+1), *(p+2), *(p+3));	//little indian on x86
	
	return EXIT_SUCCESS;
}