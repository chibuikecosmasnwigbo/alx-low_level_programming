#include	<stdio.h>
/*
 * main	-	Entry
 *
 * Return	Always	0	(success)
 *
 */

int	main(void)/*	funtion	main	description	*/
{
	int	i	=	0;

	while	(i	<	10)
	{
		putchar(i	+	'0');
		i++;
	}
	putchar('\n');
	return	(0);
}
