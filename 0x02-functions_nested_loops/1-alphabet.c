#include "main.h"
/**
 * print_alphabets - Prints the alphabet in lowercase.
 * Description: 'prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
