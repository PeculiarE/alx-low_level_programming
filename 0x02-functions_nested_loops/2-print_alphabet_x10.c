#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		i++;
	}
}
