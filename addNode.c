#include "monty.h"
/**
 * addNode - add a newnode at beginning of our
 * linked-listed behavior stack
 * @stack: double pointer to head of stack
 * @n: new data to fill in new node
 * Return: pointer to new node
 */
stack_t *addNode(stack_t **stack, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *stack;
	new->prev = NULL;

	if (*stack)
		(*stack)->prev = new;

	*stack = new;
	return (new);
}
