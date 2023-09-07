#include "monty.h"

/**
 * _isDigit - check if the string contains only digits
 * @arg: pointer on argument to check
 * Return: 0 if only digits are found, 1 otherwise
 */

int _isDigit(char *arg)
{
	int index;

	for (index = 0; arg[index]; index++)
	{
		if (arg[index] == '-' && index == 0)
			continue;
		if (isdigit(arg[index]) == 0)
			return (1);
	}
	return (0);
}


/**
 *_push - push an integer onto the stack
 *@stack: double pointer to head of stack
 *@lineNumber: line number of file we are processing
 */

void _push(stack_t **stack, unsigned int lineNumber)
{
	int data;
	char *arg;

	arg = strtok(NULL, "\n\t ");
	if (arg == NULL || _isDigit(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	data = atoi(arg);
	if (addNode(stack, data) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
