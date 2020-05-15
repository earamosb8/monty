#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <ctype.h>
#include <string.h>
/**
 * *get_op_code - find function
 * @function: function to find.
 * @line: Line number for the function.
 * Return: function
 */
void (*get_op_code(char *function, unsigned int line))(stack_t **stack, unsigned int)
{
	int i;
	stack_t *node;
	instruction_t list[] = {{"push", push}, {"pall", pall},{"pop", pop}, {"pint", pint}, {NULL, NULL}};
	char *value = NULL, *action = NULL;

	action = strtok(function, "\n ");
	value = strtok(NULL, "\n ");

	for (i = 0; list[i].opcode != NULL; i++)
	{
		if (strcmp(action, list[i].opcode) == 0)
		{
			node = creat_nod(atoi(value));
			node = node, list[i].f(&node, line);
			return (list[i].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line, function);
	exit(EXIT_FAILURE);
}

