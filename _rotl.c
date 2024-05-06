#include "monty.h"


/**
 * _rotl - rotate the stack to the top
 * @stack: pointer to the stack
 *
*/

void _rotl(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	int tmp;
	stack_t copy;

	if (*stack && stack)
	{
		tmp(*stack)->n;
		for (copy = *stack; copy->next; copy = copy->next)
			copy->next = copy->next->n;

		copy->n = tmp;

	}
}
