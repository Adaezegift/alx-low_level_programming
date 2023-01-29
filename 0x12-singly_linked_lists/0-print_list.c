#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list_t list to print
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t nodes = 0;

while (h)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
}
return (nodes);
}
