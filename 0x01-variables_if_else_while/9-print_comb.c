#include <stdio.h>

/**
 * main - prints all possible combos of single-digit numbers
 *
 * Retuen: 0 (if code runs successfully)
 */

int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');
		if (s == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

