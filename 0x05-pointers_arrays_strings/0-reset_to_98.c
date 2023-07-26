#include "main.h"

/**
 * reset_to_98 - updates the value of a var by using a pointer
 * @*n: parameter
 */

void reset_to_98(int *n)
{
	int a;
	int *n = &a;

	*n = 98;
}
