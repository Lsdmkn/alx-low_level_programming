#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign random number
 * print the last digit of the number store in the variable
 * Return: Always (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ",n);
if (n > 5)
{
	printf("and is greater than 5");
}
if (n == 0)
{
	printf("and is 0");
}
if (n < 6 && n != 0)
{
	printf("and is less than 6 and not 0");
}
printf("\n");

return (0);
}
