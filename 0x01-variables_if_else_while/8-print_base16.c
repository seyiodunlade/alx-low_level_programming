#include <stdio.h>

/**
 * main - this prints all the hexa-decimal numbers
 *
 * Return: 0 (when code runs successfully)
 */

int main(void)
{
	int s;

	char j;

	for (s = 0; s < 10; s++)
		putchar(s + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
