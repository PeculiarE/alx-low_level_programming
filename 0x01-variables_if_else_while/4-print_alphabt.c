#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphaStart = 'a', alphaEnd = 'z';

	while (alphaStart <= alphaEnd && (alphaStart != 'e' || alphaStart != 'q'))
	{
		putchar(alphaStart);
		alphaStart++;
	}
	putchar('\n');
	return (0);
}
