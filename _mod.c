#include "monty.h"

/**
 * _mod - add the first and second element to the stack
 * @stack: pointer to stack
 * @lineNumber: line number of instructions
 */

void _mod(stack_t **stack, unsigned int lineNumber)
{
	stack_t *current = *stack;
	
	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	
	current->next->n %= current->n;
	_pop(stack, lineNumber);
}
