#include "monty.h"

/**
 * main - the entry points of the programm
 * @ac: the count of args:
 * @av: array of args
 * Description: This programm is an interpreter for Monty
 * ByteCodes files.
 * Return: allways 0
 */
int main(void)
{
	stack_t *stack = NULL;

	exec_ops(&stack, "./000.m");
	return (0);
}
