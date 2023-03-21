#include <stdio.h>
/**
 * main - prints the alphabets in reverser order
 *
 * Return: 0 (when code is successful)
 */

int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
		putchar(s);
	putchar('\n');
	return (0);
}
