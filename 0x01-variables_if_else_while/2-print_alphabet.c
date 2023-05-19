#include	<stdio.h>
/*
 * main	-	Entry	point
 *
 * Return:	Always	0	(success)
 *
 */

int	main(void)
{
	char	ch	=	'a';
	char	ch_z	=	'z';

	while	(ch	<=	ch_z)
	{
		putchar(ch);
		ch++;
	}
	return	(0);
}
