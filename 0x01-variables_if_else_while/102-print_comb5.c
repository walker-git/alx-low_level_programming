#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;
	int  i, j;

	for (a= '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			i = a;
			b++;
			j = b;
			b--;
			for (c = '0'; c <= '9'; c++)
			{
				for (d = j; d <= '0'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
