#include	<stdio.h>
/*
 * main	-	write	a	program	that	print	alphabet	in	lowercase
 *
 * Return:	0	(success)
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
		putchar('\n');
	}
	return	(0);
}
