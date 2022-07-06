#include "main.h"

/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, max = 1;
	
	while (max <= 10)
	{
		i = 97;
		
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		max++;
	}
}

