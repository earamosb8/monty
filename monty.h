#ifndef __MONTY__H
#define __MONTY__H
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
stack_t *create_node(int n);
void (*get_op_code(char *function, unsigned int line)) (stack_t **stack, unsigned int);
void read_line(char *strline, int line);
void read_f(FILE *filed);
void open_file(char *myfile);
void freen(void);
void pall(stack_t **stack, unsigned int line);
void push(stack_t **node, unsigned int line);
#endif
