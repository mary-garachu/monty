#include "monty.h"
/**
 * pchar -main entry.
 * Description: Prints the char at the top of the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pchar(stack_t **top, unsigned int line_number)
{
	int ascii_num;

	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	ascii_num = (*top)->n;

	if (ascii_num < 0 || ascii_num > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(ascii_num);
	putchar('\n');
}
