#include "monty.h"
#include <stdio.h>
/**
 * read_f - Reads the content of a file.
 * @filed: file descriptor of an open file.
 */
void read_f(FILE *filed)
{
	char *strline;
	int line;
	size_t n;

	for (line = 1; getline(&strline, &n, filed) != EOF; line++)
	{
		read_line(strline, line);
	}
	free(strline);
}
