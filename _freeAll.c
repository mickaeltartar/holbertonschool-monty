#include "monty.h"

/**
 * _freeStack - frees a stack_t stack
 * @stack: stack to be freed
 * Return: void
*/

void _freeStack(stack_t **stack)
{
	stack_t *current;

	while (*stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}

/**
 * _freeAll - free line and filePointer
 * @stack: stack to free
 * @line: line to free from getline
 * @filePointer: file pointer to free
 * Return: void
*/

void _freeAll(stack_t *stack, char *line, FILE *filePointer)
{
	if (stack != NULL)
		_freeStack(&stack);
	free(line);
	fclose(filePointer);
}
