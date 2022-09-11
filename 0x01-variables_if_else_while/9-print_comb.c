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
	int num;

	for (num = '0'; num  <= '9'; num++)
	{
		putchar(num);
		if(num == '9')
		{

		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	
	}
	putchar('\n');
	return (0);
}
