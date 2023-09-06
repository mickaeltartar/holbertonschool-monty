#include "monty.h"

/**
 * stackLength - returns length of the stack
 * @stack: pointer to head of the stack
 * Return: length of the stack
*/

size_t stackLength(stack_t **stack)
{
	stack_t *current;
	unsigned int n;

	current = *stack;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
