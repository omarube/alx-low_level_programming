#include "main.h"
#include <ctype.h>

/**
 * _isdigit - X
 * @c: X
 * Return: X
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
