#include <stdio.h>

#include <stdlib.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[]);

{

	int i;

	for (i = 0; i < argc; i++)

	{

	print("argv[%d] = %s\n" i, argv[i]);

	}


	return (0);
}
