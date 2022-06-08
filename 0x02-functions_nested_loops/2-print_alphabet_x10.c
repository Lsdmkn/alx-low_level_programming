#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
int ch;
int x;

for (x = 0; x < 10; x++)
{
for (ch = 'a'; ch <= 'z' ; ch++)
{
	_putchar(ch);
}
_putchae('\n');
}
}

