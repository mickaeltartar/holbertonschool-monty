#include "monty.h"

/**
 * _push - add new item to top of the stack
 * @stack: pointer to stack
 * @n: integer
 * @lineNumber: line number of instructions
 * Return: 0 on success otherwise -1
*/

void _push(stack_t **stack, unsigned int lineNumber, char *n)
{
	stack_t *new;
	int index;

	if (n == NULL)
	{
		printf("L%d: usage: push integer\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	for (index = 0; n[index] != '\0'; index++)
	{
		if (n[0] == '-' && index == 0)
			continue;
		if (isdigit(n[index]) == 0)
		{
			printf("L%d: usage: push integer\n", lineNumber);
			exit(EXIT_FAILURE);
		}
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(n);
	new->prev = NULL;
	new->next = NULL;
	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;
}
