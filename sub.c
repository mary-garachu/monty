#include "monty.h"

/**
 *_sub -main entry.
 *Description:Sub the top element of stck from the 2d top elem of the stak
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void sub(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*top)->next;
	tmp->n -= (*top)->n;
	pop(top, line_number);
}
