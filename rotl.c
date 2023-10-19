#include "monty.h"
/**
 * rotl_stack -main entry.
 * Description: top element of the stack becomes the last one.
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void rotl(stack_t **top, unsigned int line_number)
{
	stack_t *new_top, *tmp, *new_last;

	(void)line_number;

	if (*top == NULL || (*top != NULL && (*top)->next == NULL))
		return;

	new_last = *top;
	tmp = *top;

	while (tmp->next)
		tmp = tmp->next;

	new_top = (*top)->next;
	new_last->next = NULL;
	new_last->prev = tmp;
	tmp->next = new_last;
	new_top->prev = NULL;
	*top = new_top;
}
