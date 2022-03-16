# include "main.h"
/**
 *  positive_or_negative(int i)- random number comparison
 *
 *  Return: null
 */

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
	printf("%d is %s\n", i, "positive");

	}
	else if (i < 0)
	{
	printf("%d is %s\n", i, "negative");

	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
}
