#include "lists.h"

/**
 * @list: linked list to check
 * check_cycle - checks if a linked list contains a cycle
 * Return: 0 if the list has no a cycle, 1 if it has
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
