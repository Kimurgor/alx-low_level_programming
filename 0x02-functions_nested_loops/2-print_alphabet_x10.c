#include "main.h"
/**
 *  print_alphabet_x10 - 10 times the list of alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j;
	int m = 0;

	while (m  <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}

		_putchar('\n');

		m++;
	}
}
