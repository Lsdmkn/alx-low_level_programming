#include <stdio.h>

/**
 * main - Entry point of program
 * prints the alphabet in lowercase
 * Return: Always (0) Success
 */

int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar(10): /* this is a ascii code for new line */

return (0);
}
