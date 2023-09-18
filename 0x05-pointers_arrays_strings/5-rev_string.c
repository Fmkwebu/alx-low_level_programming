#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int end;
	int start;
	char temp;

	while (s[len] != '\0')
	{

	len++;

	}

	for (start = 0, end = len - 1; s)

	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	}
}
