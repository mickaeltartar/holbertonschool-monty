#include "monty.h"

/**
 * _add - add the first and second element to the stack
 * @stack: pointer to stack
 * @lineNumber: line number of instructions
 */

void _add(stack_t **stack, unsigned int lineNumber)
{
	stack_t *current = *stack;

	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	current->next->n += current->n;
	_pop(stack, lineNumber);
}
