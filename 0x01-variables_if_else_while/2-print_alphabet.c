#include <stdio.h>

/**
 * main - Entry point of program
 * prints the alphabet in lowercase
 * Return: Always (0) Success
 */

int main ()
{
char ch;

for(ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
}
return (0);

