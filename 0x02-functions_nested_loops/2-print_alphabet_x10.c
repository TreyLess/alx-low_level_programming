#include "main.h"
/**
 * print_alphabet_10x - prints alpabet in lowercase ten times
 *
 * Return: 0
 */
void print_alphabet_10x(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar (alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}

