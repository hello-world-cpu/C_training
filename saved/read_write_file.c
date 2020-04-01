#include <stdio.h>
#include <stdlib.h>
//write 4 words and one integer with a space or a newline between in a file text.txt (pass that file in argument in the command line)
//prints "Done" on a newline at the end of the input file
#define out_filename "backwards.txt"

int main(int argc, char const *argv[])
{
	FILE *f_in, *f_out;
	//read 4 words and one integer from the file in argv[1]:
	char str1[40], str2[40], str3[40], str4[40];
	int a;

	f_in=fopen(argv[1], "r+");
	fscanf(f_in, "%s %s %s %s %d", str1, str2, str3, str4, &a);
	fprintf(f_in, "\nDone");
	printf("%s\n%s\n%s\n%s\n%d\n", str1, str2, str3, str4, a);
	fclose(f_in);

	//write backwards to a file named backwards.txt:
	f_out=fopen(out_filename, "w");
	fprintf(f_out, "%d\n%s\n%s\n%s\n%s\n", a, str4, str3, str2, str1);

	fclose(f_out);

	return 0;
}
