#include <main.h>
/**
 * print_alpahet - prints the alphabet in lowercase, followed by a new linw.
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
}
