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
/**
 * pop - removes the top element of the stack.
 * @stack: double pointer to linked list
 * @line: Line number
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *ptr;

	if (*stack == NULL)
		dprintf(STDERR_FILENO, "L%ui: can't pop an empty stack\n", line);
                exit(EXIT_FAILURE);
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		ptr = (*stack)->next;
		(*stack) = ptr;
		ptr = ptr->prev;
		(*stack)->prev = NULL;
		free(ptr);
	}
}
/**
 * swap - swaps the top two elements.
 * @stack: double pointer to linked list
 * @line: Line number
 */
void swap(stack_t **stack, unsigned int line)
{
	stack_t *ptr;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%ui: can't swap, stack too short\n", line);
                exit(EXIT_FAILURE);
	}
	ptr = (*stack)->next;
	(*stack)->prev = ptr;
	(*stack)->next = ptr->next;
	ptr->prev = NULL;
	ptr->next = *stack;
	*stack = ptr;
}
