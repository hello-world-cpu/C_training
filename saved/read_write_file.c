#include <stdio.h>
#include <stdlib.h>
#define filename1 "input.txt"	//write 4 words and one integer with a space or a newline between
#define filename2 "output.txt"

int main(int argc, char const *argv[])
{
	FILE *f_in, *f_out;
	//read from a file (4 strings and one integer):
	char str1[40], str2[40], str3[40], str4[40];
	int a;

	f_in=fopen(filename1, "r");
	fscanf(f_in, "%s %s %s %s %d", str1, str2, str3, str4, &a);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%d\n", a);

	fclose(f_in);

	//write to a file:
	f_out=fopen(filename2, "w");
	fprintf(f_out, "%d\n%s\n%s\n%s\n%s\n", a, str4, str3, str2, str1);

	fclose(f_out);

	return 0;
}