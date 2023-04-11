#include <stdio.h>

/**
 * main - print its name, followed ny a new line
 * @argc: arguement count
 * @argv: arguement
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
