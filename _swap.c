#include "monty.h"

/**
 * _swap - swap the first element of the stack with the second
 * @stack: pointer to stack
 * @lineNumber: line number of instructions
 */

void _swap(stack_t **stack, unsigned int lineNumber)
{
	stack_t *current = *stack;
	int temp;

	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	temp = current->n;

	current->n = current->next->n;
	current->next->n = temp;
}
