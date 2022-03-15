# include "main.h"
/**
 * print_alphabet- print alphabet in lowercase
 *
 * Return: Alwyas 0 (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
