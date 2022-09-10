#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcAlpha, ucAlpha;

	for (lcAlpha = 'a'; lcAlpha <= 'z'; lcAlpha++)
	{
		putchar(lcAlpha);
	}
	for (ucAlpha = 'A'; ucAlpha <= 'Z'; ucAlpha++)
	{
		putchar(ucAlpha);
	}
	putchar('\n');
	return (0);
}
