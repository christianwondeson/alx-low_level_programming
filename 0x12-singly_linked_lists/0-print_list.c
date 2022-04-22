Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@christianwondeson 
girumtim
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c
@girumtim
girumtim mandatory
Latest commit 5aa5f61 23 hours ago
 History
 1 contributor
28 lines (22 sloc)  387 Bytes
   
#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
