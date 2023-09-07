#include "monty.h"

/**
 * _getOp - checks input string for opcode
 * @opCode: command interpretor
 * @stack: pointer to stack
 * @lineNumber: line number of opcode for user input
 * Return: 1 on sucess otherwise 0
*/

void _getOp(char *opCode, stack_t **stack, unsigned int lineNumber)
{
	int index;
	instruction_t opCodes[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{NULL, NULL}
		};

		for (index = 0; opCodes[index].opcode != NULL; index++)
	{
		if (strcmp(opCode, opCodes[index].opcode) == 0)
		{
			(opCodes[index].f)(stack, lineNumber);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", lineNumber, opCode);
	exit(EXIT_FAILURE);
}
