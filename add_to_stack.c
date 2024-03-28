#include "monty.h"
/**
 * add_to_stack - adds a new node at the end of a the stack
 * @head: the head of the stack
 * @n: the number to add
 * Return: the address of the new element, or NULL if it failed
 */
stack_t *add_to_stack(stack_t **head, const int n)
{
	stack_t *new, *node = NULL;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (head && (*head))
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		new->prev = node;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}
