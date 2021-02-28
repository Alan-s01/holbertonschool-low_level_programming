#include "holberton.h"

/**
 * main - multiplies 2 nums
 * @argc: num
 * @argv: value
 * Return: 1 or 0
 */

int main(int argc, char **argv)
{
	int i, x;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = 1;
		for (i = 1; i <= 2; i++)
			x = x * atoi(argv[i]);
		printf("%d\n", x);
		return (0);
	}
}

