#include "main.h"

/**
 * _strlen - returns the length of a string
 *@ss: parameter targetted
 * Return: always 0
 */


int _strlen(char *ss)
{
	int tam = 0;

	while (*ss != '\0')
	{
		tam++;
		ss++;
	}
	return (tam);
}
