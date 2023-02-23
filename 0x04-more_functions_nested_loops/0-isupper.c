#include "main.h"

/**
 * Main : check for upper case characters
 * Return : return 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
