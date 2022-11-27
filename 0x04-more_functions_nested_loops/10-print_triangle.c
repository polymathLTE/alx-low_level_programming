#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function name
 * @size: size of triangle as integer
 *
 * Description: displays a triangle, followed by a new line
 */

void print_triangle(int size)
{
	int tri_hegt, tri_base, i, size_ref;

	i = 0;
	size_ref = size;
	if (size > 0)
	{
		for (tri_hegt = 0; tri_hegt < size; tri_hegt++)
		{
			for (tri_base = 0; tri_base < size; tri_base++)
			{
				if (i < size)
				{
					for (; i < size_ref - 1; i++)
					{
						_putchar(' ');
					}
					_putchar('#');
					continue;
				}
				_putchar('$');
				if (i == size)
				{
					for (; i <= size; i++)
						_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
