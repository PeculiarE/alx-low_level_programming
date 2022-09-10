#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphaStart = 'a', alphaEnd = 'z';

	do
	{
		putchar(alphaStart);
		alphaStart++;
	}
	while (alphaStart <= alphaEnd && (alphaStart != 'e' || alphaStart != 'q'));
	putchar('\n');
	return (0);
}
