#include	<stdio.h>
/*
 * main	-	Entry
 *
 * Return:	0	(success)
 *
 */


/*	main	description	*/
int	main(void)

{
	char	ch_a	=	'a';
	while	(ch_a	<=	'z')
	{
		if	(ch_a	!=	'e'	||	ch_a	!=	'q')
		{
			putchar(ch_a);
		}
		ch_a++;
	}
	putchar('\n');
}
