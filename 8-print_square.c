#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int	i,	j;
	if(	size	<=	0)
	{
		_putchar('\n');
		else
			for	(i	=	1;	i	<=	size;	i++)
			{
				for	(j	=	1;	j	<=	size;	j++)
				{
					_putchsr('#');
				}
				_putchar('\n');
			}
	}
}

