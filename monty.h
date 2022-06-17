#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node stucture
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

extern stack_t *head;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void add_to_stack(stack_t **new_node, __attribute__((unused)) unsigned int ln);
void print_stack(stack_t **stack, unsigned int line_number);





#endif
