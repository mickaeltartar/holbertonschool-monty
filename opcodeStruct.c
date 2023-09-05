#include "monty.h"

/**
 * *opcode_struct - checks input string for opcode
 * @opcode: command interpretor
 * @stack: pointer to stack
 * @lineNumber: line number of opcode for user input
 * Return: 0 on sucess otherwise -1
*/

int opcode_struct(char *opcode, stack_t **stack, unsigned int lineNumber)
{
	int index;

	instruction_t opcodes[] = {
		{"pall", _pall},
		{NULL, NULL}
		};

		for (index = 0; opcodes[index].opcode != NULL; index++)
	{
		if (strcmp(opcode, opcodes[index].opcode) == 0)
		{
			(opcodes[index].f)(stack, lineNumber);
			return (EXIT_SUCCESS);
		}
	}
	printf("L %d: usage: push integer, %s\n", lineNumber, opcode);
	exit(EXIT_FAILURE);
}
