#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char myStr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fwrite(myStr, sizeof(char), sizeof(myStr) - 1, stderr);
return (0);
}
