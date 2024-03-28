#include "monty.h"
/**
 * push - pushes an at the end of a stack
 * @stack: the stack
 * @line_number: the line number of the instruction in .b file
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	char *token = NULL;

	(void) line_number;
	token = strtok(NULL, " \n");
	if (!token)
		exit(1);
	if (is_int(token))
	{
		node = add_to_stack(stack, atoi(token));
		if (!node)
		{
			exit(1);
		}
	}
}
