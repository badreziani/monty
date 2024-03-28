#include "monty.h"
/**
 * pall - prints all element in a stack
 * @stack: the stack
 * @line_number: the line number of the instruction in .b file
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	node = *stack;
	while (node->next)
		node = node->next;
	while(node)
	{
		printf("%d\n", node->n);
		node = node->prev;
	}

}
