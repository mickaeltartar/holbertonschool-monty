#include "monty.h"

/**
 * _freeAll - function to free and leave proper
 * @stack: pointer to head of stack
 * @filePointer: pointer to file opened
 */

void _freeAll(stack_t *stack, FILE *filePointer)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
	fclose(filePointer);
}
