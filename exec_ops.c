#include "monty.h"

/**
 * exec_ops - reads diffrent operation from .b file
 * then exectutes each operation
 * @stack: the stack
 * @path: the path to .b file
 * Return: nothing
 */
void exec_ops(stack_t **stack, char *path)
{
	FILE *file_ptr;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	void (*op)(stack_t **stack, unsigned int line_number) = NULL;
	unsigned int line_number = 0;

	file_ptr = fopen(path, "r");
	if (!file_ptr)
	{
		perror("fopen");
		exit(1);
	}
	while ((nread = getline(&line, &len, file_ptr)) != -1)
	{
		line_number++;
		op = get_op(line);
		if (!op)
			exit(1);
		op(stack, line_number);
	}
	free(line);
	fclose(file_ptr);
}
