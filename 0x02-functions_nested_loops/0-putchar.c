# include <stdio.h>
# include "main.h"
/**
 * main- Entery point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char print[9];
	int i = 0;

	print[0] = '_';
	print[1] = 'p';
	print[2] = 'u';
	print[3] = 't';
	print[4] = 'c';
	print[5] = 'h';
	print[6] = 'a';
	print[7] = 'r';
	print[8] = '\n';
	for (i = 0; i <= 8; i++)
	{
		if (print[i] != EOF)

		{
			_putchar(print[i]);
		}
	}
	return (0);
}
