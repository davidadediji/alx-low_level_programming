#include "main.h"
/**
 * print_square - function to print a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			_putchar('\n');
		}
		_putchar('#');

		int j;

		for (j = 0; j < size - 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
