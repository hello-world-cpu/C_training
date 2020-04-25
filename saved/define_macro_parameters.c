#include <stdio.h>
#include <stdlib.h>

#define PROD(a,b) (a)*(b)

int main(void)
{
	int a=4, b=5, c;
	c=PROD(a+1,b+1);
	printf("c==%d\n", c);
	return EXIT_SUCCESS;
}

/*with (a)*(b) line 4, the macro is OK (c==30). With merely a*b, it is not (c==10: wrong result)*/