#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 1b1ffefffcc6f6e2aa33c40023818ff1e5ab5315
=======

>>>>>>> b85a0ef77e25f0c9904dfe45457b80005f213d72
