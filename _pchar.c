#include "monty.h"

/**
 * _pchar - print the char at the top of the stack
 * @stack: pointer to stack
 * @lineNumber: of instruction
 * Return: void
*/

void _pchar(stack_t **stack, unsigned int lineNumber)
{
	int c;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	c = (char)(*stack)->n;
	if (c < 32 || c > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineNumber);
		exit(EXIT_FAILURE);
	}
	putchar(c);
	putchar('\n');
}
