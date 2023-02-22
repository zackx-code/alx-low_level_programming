#include "main.h"
/**
 * print_alphabet - Opening point
 * prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing
 **/
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

