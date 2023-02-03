#include "main.h"

/**
* swap_int - swaps value of two integer
*@a:integer
*@b:integer
* Return:void
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;

}
