#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <ctype.h>
#include <string.h>
/**
 * findmy_func - find function
 * @function: function to find.
 * @line: Line number for the function.
 * @parameter: value.
 */
void (*get_op_code(char *function, unsigned int line)) (stack_t **stack, unsigned int)
{
	int i;
	instruction_t list[] = {
        {"push", push}, {NULL, NULL}};

	for (i = 0; list[i].opcode != NULL; i++)
	{
		if (strcmp(function, list[i].opcode) == 0)
		{
			return (list[i].f);
		}
	}
	fprintf(stderr,"L%u: unknown instruction %s\n", line, function);
	exit(EXIT_FAILURE);
}

