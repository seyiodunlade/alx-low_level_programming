#include <stdio.h>
/**
 * main - this prints single digits of base ten
 *
 * Return: 0 (when code is successful)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
