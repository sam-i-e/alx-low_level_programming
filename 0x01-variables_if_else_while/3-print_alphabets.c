#include <stdio.h>
/**
 * main - Prints out the alphabet in both lowercase and uppercase letters
 *
 * Return: Always (0)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
