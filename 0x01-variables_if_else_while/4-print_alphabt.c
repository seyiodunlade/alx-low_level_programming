#include <stdio.h>

/**
 * main - this prints letters from a to z excluding q and e
 *
 * Return: 0 (if code is successful)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while
		(letter <= 'z')
		{
			if (letter != 'q' && letter != 'e')
				putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
