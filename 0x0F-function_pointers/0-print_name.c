#include "function_pointers.h"
/**
 * print_name - do thing
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
