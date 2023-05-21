#include	<stdio.h>

/*
 * amin	-	Entry
 *
 * return:	Always	0	(success)
 */

int	main(void)
{
	char	ch_z	=	'z';

	while	(ch_z	>	'a')
	{
		putchar(ch_z);
		ch_z--;
	}
	putchar('\n');
	return	(0);
}
