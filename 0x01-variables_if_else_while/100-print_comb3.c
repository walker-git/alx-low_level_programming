#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha, num;
	
	for (alpha = 'a'; alpha<= 'f'; alpha++)
	{
		for  (num = '1'; num <= '6'; num++)
		{
			putchar(alpha);
			putchar(num);
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
