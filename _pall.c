#include "monty.h"

/**
 * _pall - print the value of all items on the stack
 * @stack: pointer to stack
 * @lineNumber: line number of instructions
 * Return: 0 on success otherwise -1
*/

void _pall(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	stack_t *current = *stack;

	if (stack == NULL || *stack == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
