#include "main.h"

/**
 * _strlen - checks length of a string
 * @s: The string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
