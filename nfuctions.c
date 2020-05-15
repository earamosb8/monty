#include "monty.h"
/**
 * pint - prints the value at the top of the stack,
 * @stack: double pointer to linked list
 * @line_number: Line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%ui: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
