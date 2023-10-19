#include "monty.h"
/**
 *mod -main entry.
 *Description: module of the second top element of the stack by the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next ==  NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*top)->n == 0)
		div_error2(line_number);

	tmp = (*top)->next;
	tmp->n = (tmp->n) % (*top)->n;
	pop(top, line_number);
}
