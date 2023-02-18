#include <stdio.h>
/**
 * main	-	Description:	Entry	point
 *
 * Return:	0	(success)
 */

int	main(void) /*	Return	nothing	*/

{
	char	c;
	char	d;

	c	=	'a';
	d	=	'A';

	while
		(c	<=	'z')
		{
			putchar(c);
			c++;
		}
	while
		(d	<=	'Z')
		{
			putchar(d);
			c++;
		}
	return	(0);
}
