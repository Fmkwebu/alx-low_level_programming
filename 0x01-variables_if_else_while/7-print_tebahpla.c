#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always zero
 *
 */

int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');
	return (0);
}
