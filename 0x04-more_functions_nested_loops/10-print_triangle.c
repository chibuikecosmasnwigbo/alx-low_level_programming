#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int	j,	i;

	if	(size	<=	0)
	{
		_putchar('\n');
		else
			for	(j	=	1;	j	<=	size;	j++)
			{
				for	(i	=	0;	i	<	size;	i++)
					if	((i	+	j)	<	size)
					{
						_putchar(' ');
						else
							_putchar('#');
					}
			}
		_putchar('\n');
	}
}


