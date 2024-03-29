#include "monty.h"
/**
 * pop - removes the top element of the stack.
 * @stack: the stack
 * @line_number: the line number of the instruction in .b file
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void) line_number;
	node = *stack;
	if(!node)
	{
		exit(1);
	}
	if (node->prev)
	{
		*stack = node->prev;
	}
	free(node);
}
