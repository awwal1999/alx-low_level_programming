#include "main.h"

/**
 * _isalpha -> checks for alphabetical letters
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
