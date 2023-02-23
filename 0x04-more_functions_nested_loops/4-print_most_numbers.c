#include "main.h"

/**
 * Main : print the numbers from 0 to 9, followed by a new line
 * Return : void, don't print 2 and 4
 */

void print_most_numbers(void)
{
	for(char c = 0; c <= '9'; c++)
	{
		if(!(c == '2' && c == '4'))
			_putchar(c);
		else
			_putchar('\n');
	}
}
