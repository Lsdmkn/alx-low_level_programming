#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Return: always 0
 */


int _strlen(char *ss)
{
	int n = 0;

	while (*ss != '\0')
	{
		tam++;
		ss++;
	}
	return (tam);
}
