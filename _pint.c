#include "monty.h"

/**
 * _pint - function to print the first element of the stack
 * @stack: pointer to stack
 * @lineNumber: line number of instructions.
 */

void _pint(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	stack_t *current = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
