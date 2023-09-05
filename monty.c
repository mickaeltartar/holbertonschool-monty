#include "monty.h"

/**
 * main - main function of monty
 * @argc: argument count
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success otherwise -1
*/

int main(int argc, char **argv)
{
	FILE *filePointer;
	stack_t *stack = NULL;
	char *line = NULL;
	char *opcode;
	char *n;
	unsigned int lineNumber;
	size_t length = 0;
	ssize_t read;

	if (argc != 2)
	{
		printf("Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	filePointer = fopen(argv[1], "r");
	if (filePointer == NULL)
	{
		printf("Error: Can't open file\n");
		exit(EXIT_FAILURE);
	}
	lineNumber = 0;
	while ((read = getline(&line, &length, filePointer)) != -1)
	{
		lineNumber++;
		opcode = strtok(line, DELIMITERS);

		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, DELIMITERS);
			_push(&stack, lineNumber, n);
		}
		else
			opcode_struct(opcode, &stack, lineNumber);
	}
	_freeAll(stack, line, filePointer);
	return (EXIT_SUCCESS);
}
