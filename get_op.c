#include "monty.h"

/**
 * get_op - get the operation from a line
 * @line: the line
 * Return: the operation func
 */
void (*get_op(char *line))(stack_t **stack, unsigned int line_number)
{
	char *code;
	int idx = 0;
	struct instruction_s ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};

	code = strtok(line, " \n");
	if (!code)
		return (NULL);
	while (ops[idx].f && strcmp(ops[idx].opcode, code) != 0)
		idx++;
	return (ops[idx].f);
}
