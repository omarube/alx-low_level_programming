#include "function_pointers.h"
/**
 * int_index - search for  integer
 * @array: array with elements
 * @size: size of array
 * @fp: function pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*fp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL || fp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (fp(array[i]) == 1)
return (i);
}
return (-1);
}
