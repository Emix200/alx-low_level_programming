#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers followed by a new line
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int x, y, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += y;
		}
	}
		printf("%d\n", sum);

		return (0);

}
