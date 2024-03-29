#include "monty.h"
/**
 * free_stack - frees a stack
 * @stack: the stack to be freed
 * Return: nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *node;

	if (stack)
	{
		while (stack)
		{
			node = stack->next;
			free(stack);
			stack = node;
		}
	}
}
