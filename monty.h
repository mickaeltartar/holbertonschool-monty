#ifndef MONTY_H_
#define MONTY_H_

/* Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/* Structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int lineNumber);
} instruction_t;

/* Prototypes*/

int _isDigit(char *arg);
int main(int argc, char **argv);
stack_t *addNode(stack_t **stack, int n);
void _freeAll(stack_t *stack, FILE *filePointer);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void _getOp(char *opCode, stack_t **stack, unsigned int lineNumber);
void _pint(stack_t **stack, unsigned int __attribute__((unused)) lineNumber);
void _push(stack_t **stack, unsigned int lineNumber);
void _pall(stack_t **stack, unsigned int lineNumber);
void _pop(stack_t **stack, unsigned int lineNumber);
void _swap(stack_t **stack, unsigned int lineNumber);
void _add(stack_t **stack, unsigned int lineNumber);
void _nop(stack_t **stack, unsigned int lineNumber);
void _sub(stack_t **stack, unsigned int lineNumber);
void _mul(stack_t **stack, unsigned int lineNumber);
void _div(stack_t **stack, unsigned int lineNumber);
void _mod(stack_t **stack, unsigned int lineNumber);
void _pchar(stack_t **stack, unsigned int lineNumber);

#endif
