#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 'z'; z  >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
