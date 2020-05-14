#include <stdio.h>
#include "monty.h"
/**
 * findmy_func - find function
 * @function: function to find.
 * @line: Line number for the function.
 * @parameter: value.
 */
void findmy_func(char *function, char *parameter, int line)
{
	printf("Es la %s de el %s de la linea %d\n", function, parameter, line);
}

