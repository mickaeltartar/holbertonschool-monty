#include "monty.h"

/**
 * _pstr - print the string starting from the top of the stack
 * @stack: pointer to the stack
 * @lineNumber: line number of intruction
 * return: void
*/

void _pstr(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	char c;
	stack_t *current;

	current = *stack;

	while (current != NULL)
	{
		c = (char)current->n;
		if (c < 126 && c > 0)
		{
			putchar(c);
			current = current->next;
		}
		else
			break;
	}
	putchar('\n');

}
