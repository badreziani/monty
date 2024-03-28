#include "monty.h"
/**
 * is_int - check is a string is an integer
 * @str: the string
 * Return: 1 if int else 0
 */
int is_int(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	if (str[0] == '-')
		i = 1;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
