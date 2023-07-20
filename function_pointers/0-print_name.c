#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - This funtion prints a name
 * @name : pointer to name
 * @f : function pointer
 */

void print_name(char *name, void (*f)(char *))

{
	if (!name || !f)
		return;
	f(name);

}
