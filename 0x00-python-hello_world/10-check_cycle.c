#include "lists.h"
#include <stddef.h>

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */

typedef struct listint {
    int value;
    struct listint *next;
} listint_t;

int check_cycle(listint_t *list) {
    listint_t *slow = list;
    listint_t *fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;  // Cycle detected
        }
    }

    return 0;  // No cycle found
}
