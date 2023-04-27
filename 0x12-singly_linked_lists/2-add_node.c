#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: first node
 * @str: element
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *li;
	int i = 0;

	while (str[i])
		i++;

	li = malloc(sizeof(list_t));
	if (li == NULL)
		return (NULL);

	li->str = strdup(str);
	li->len = i;
	li->next = *head;

	*head = li;

	return (li);
}
