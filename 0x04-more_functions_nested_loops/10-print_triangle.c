#include	"main.h"

/*
 * print_triangle - a funtion that prints a triangle
 *
 * @size: size of triangle
 *
 * Return: triangle	of # size
 */

void print_triangle(int size)
{
	int	j,	i;

	for	(j	=	0;	j	<=	size;	j++)
	{
		for	(i	=	0;	i	<=	size;	i++)
		{
			if	((i	+	j)	<=	size)
				_putchar(' ');
			else
				_putchar('#');
			
		}
		_putchar('\n');
	}
}


