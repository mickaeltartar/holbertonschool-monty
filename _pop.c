#include "monty.h"

/**
 * _pop - sup the first element of the stack
 * @stack: pointer to stack
 * @lineNumber: line number of instructions
 */

void _pop(stack_t **stack, unsigned int lineNumber)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	*stack = temp->next;
	temp->prev = NULL;
	free(temp);
}
