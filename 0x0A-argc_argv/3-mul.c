#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers followed by a new line
 * @argc: arguement count
 * @argv: arguement
 *
 * return: return 1 when print error
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
