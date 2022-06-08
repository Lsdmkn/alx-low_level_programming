#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @ch: a character that will be checked
 * Return: returns 0 or 1
 */
int _isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
