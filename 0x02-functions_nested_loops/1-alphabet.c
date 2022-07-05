#include <stdio.h>
#include "main.h"

/**
 * main entry point
 * print_alphabet: prints the alphabet, in lowercase
 * Return Always 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
