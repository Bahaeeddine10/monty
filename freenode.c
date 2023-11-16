#include "monty.h"

/**
 * freeNodes - Frees nodes in the stack.
 */
void freeNodes(void)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
