#include "main.h"

/**
 * int_strlen: function that returns lenght of a string
 * Return: 0 is success
 */

int strlen(char *s)
{
	int a = 0;
	int s;

	for(s = 0; *s++)
		a++;
	return (a);
}
