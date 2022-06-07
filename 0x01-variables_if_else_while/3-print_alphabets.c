#include <stdio.h>

/**
 * main - Entry point of program
 * prints lowercase and upper cases of the alphabet
 * return: Always (0) Success
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line */

return (0);
}
