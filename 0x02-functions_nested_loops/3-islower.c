#include "main.h"
/**
 * _islower - Entry point
 * Description  checks for lowercase characters
 * @c: the integer value it gets
 * Return 1 if lowercase and return 0 otherwise
 */
int _islower(int c)
{
	int m = 'a';

	for (m = 'a'; m <= 'z'; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}
	return (0);
}
