#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes
 * of its own main function.
 * @argc: desired number of arguments
 * @argv: desired array of arguments
 * Return: Always Successful when (0)
 */

int main(int argc, char *argv[])
{
	int bytes, b;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (b = 0; b < bytes; b++)
	{
		if (b == bytes - 1)
		{
			printf("%02hhx\n", arr[b]);
			break;
		}
		printf("%02hhx ", arr[b]);
	}
	return (0);
}
