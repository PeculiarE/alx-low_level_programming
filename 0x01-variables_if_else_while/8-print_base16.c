#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numberHex, letterHex;

	for (numberHex = 48; numberHex <= 57; numberHex++)
	{
		putchar(numberHex);
	}
	for (letterHex = 97; letterHex <= 102; letterHex++)
	{
		putchar(letterHex);
	}
	putchar('\n');
	return (0);
}
