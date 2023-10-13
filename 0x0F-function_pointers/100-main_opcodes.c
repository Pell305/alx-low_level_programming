#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print opcodes of the main function.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 if successful, 1 if the argument count is incorrect,
 * or 2 if the byte count is negative.
 */
int main(int argc, char *argv[])
{
	int byte_count, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	byte_count = atoi(argv[1]);

	if (byte_count < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print opcodes */
	for (i = 0; i < byte_count; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		if (i < byte_count - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
