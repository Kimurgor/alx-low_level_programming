#include <stdio.h>

/**
 * main - print lowercase a-z, one character per line
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        putchar(alphabet);
        putchar('\n');
    }

    return (0);
} 
