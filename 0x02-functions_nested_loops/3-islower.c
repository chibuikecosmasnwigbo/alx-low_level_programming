#include "main.h"

/**
 * main - check the code.
 *
 * Return: 1	if	c
 * Return: 0
 */
int _islower(int c)
{
	int letter	=	'a';

	while	(letter	>=	'a'	||	letter	<=	'z')
	{

		if	(c	==	letter)
		{
			return	(1);
		}
	}
	return	(0);
}

