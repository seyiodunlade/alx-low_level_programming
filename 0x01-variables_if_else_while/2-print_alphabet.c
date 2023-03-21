#include <stdio.h>
/**
 * main - prints all alphabets
 *
 * Return: 0 (if code is successful)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
