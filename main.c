#include "monty.h"

/**
 * main - the entry points of the programm
 * @ac: count of args
 * @av: array of args
 * Description: This programm is an interpreter for Monty
 * ByteCodes files.
 * Return: allways 0
 */
int main(int ac, char *av[])
{
	stack_t *stack = NULL;
	if (ac < 2)
		return (1);
	exec_ops(&stack, av[1]);
	return (0);
}
