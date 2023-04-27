#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node athe end of a list
 * @head: head
 * @str: string to be duplicated
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *li, *f;

	while (str[i])
		i++;
	li = malloc(sizeof(list_t));
	if (li == NULL)
		return (NULL);
	li->str = strdup(str);
	li->len = i;
	li->next = NULL;
	if (strdup(str) == NULL)
	{
		free(li);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = li;
		return (li);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = li;
		return (li);
	}
}
