#include "main.h"
/**
 * print_alphabets_x10 -> Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabets_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
