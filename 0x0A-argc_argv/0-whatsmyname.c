#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argc argument
 * @argv: argv argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
