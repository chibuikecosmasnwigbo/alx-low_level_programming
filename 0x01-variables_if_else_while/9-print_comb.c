#include	<stdio.h>
/*
 * main	-	Entry
 *
 * Return:	Always	0	(SUCCESS)
 */

int	main(void)
{
	int	i	=	0;

	while	(i	<	10)
	{
		putchar(i	+	'0');
		if	(i	<	10)
		{
			putchar(',');
			putchar('');
		}
		i++;
	}
	putchar('\n');
	return	(0);
}

