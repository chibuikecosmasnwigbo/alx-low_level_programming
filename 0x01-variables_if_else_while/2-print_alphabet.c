#include <stdio.h>
/**
 * main	Description	Entry	point
 *
 * Return:	0	(success)
 */

int	main(void)	/*	Return	nothing	*/

{
	char	d;
	char	c;

	c	=	'a';
	d	=	('\n');

	while	(c	<=	'z');
	{
		putchar	(c);
		c++;
	}
	{
		putchar	(d);
	}
	return	(0);

}
