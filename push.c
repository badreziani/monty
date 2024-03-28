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
	stack_t *current;
	char *token = NULL;

	token = strtok(NULL, " \n");
	printf("{%s}\n", token);
	current = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (current)
		current->prev = node;
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
