#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*give a sentence in argument, allocates space in memory to backup the sentence*/

int main(int argc, char **argv)
{
	char *s=NULL;
	int len=0;
	int cumul=0;
	int i,j;

	for(i=1; i<argc; i++)
		len+=strlen(argv[i]);

	printf("len = %d\n", len);
	s=malloc(len*sizeof(char));

	for(i=1; i<argc; i++)
	{
		for(j=0; j<strlen(argv[i]); j++)
			{
				*(s+cumul+j)=*(argv[i]+j);
				printf("s=%s\n", s);
			}//terase
		cumul+=strlen(argv[i]);
		printf("s=%s, cumul=%d\n", s, cumul);
	}

	printf("%s\n", s);

	return 0;
}