#include <stdio.h>
#include <stdlib.h>
#define MSG argv[1]
#define CYP "encoded.txt"
#define shift atoi(argv[2])

int main(int argc, char const *argv[])
{
	FILE *f_in, *f_out;
	char c;

	if((f_in=fopen(MSG,"r"))==NULL)
	{
		fprintf(stderr,"error, unable to open the file %s\n",MSG);
		return(EXIT_FAILURE);
	}

	if((f_out=fopen(CYP,"w"))==NULL)
	{
		fprintf(stderr,"error, unable to write in the file %s\n",CYP);
		return(EXIT_FAILURE);
	}

	while((c=fgetc(f_in))!=EOF)
	{
		if((c==' ')||(c=='\n'))
			{
				fputc(c,f_out);
				continue;
			}
		if((c>64)&&(c<91))
			c=(((c-65)+shift)%26)+65;
		else if((c>96)&&(c<123))
			c=(((c-97)+shift)%26)+97;
		else
		{
			fprintf(stderr,"error, input character out of range\n");
			return(EXIT_FAILURE);
		}

		fputc(c,f_out);
	}

	fclose(f_in);
	fclose(f_out);

	return 0;
}
