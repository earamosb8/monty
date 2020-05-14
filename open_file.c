#include "monty.h"
/**
 * open_file - Opens a file.
 * @myfile: String with the name of the file.
 */
void open_file(char *myfile)
{
	FILE *fild;

	if (access(myfile, R_OK) != 0)
	{
		printf("Error: Can't open file %s\n", myfile);
		exit(EXIT_FAILURE);
	}
	else
	{
		fild = fopen(myfile, "r");
		if (fild == NULL)
		{
			printf("Error: Can't open file %s\n", myfile);
			exit(EXIT_FAILURE);
		}
		read_f(fild);
	}
}
