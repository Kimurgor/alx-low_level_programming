#include "holberton.h"

/**
 * print_alphabet - Check description
 * Description: It prints alphabets in lowercase and a new line
 * Return: void
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar(\n);
}
