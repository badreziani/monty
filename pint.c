#include "monty.h"
/**
 * pint - prints the value at the top of the stack,
 * followed by a new line.
 * @stack: the stack
 * @line_number: the line number of the instruction in .b file
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void) line_number;
	node = *stack;
	if(!node)
	{
		exit(1);
	}
	printf("%d\n", node->n);
}
