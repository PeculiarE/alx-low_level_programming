#include "main.h"

/**
 * main - Entry point
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return;
}
