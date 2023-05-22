#include	<stdio.h>
/*
 *	main	-	Entry
 *
 *	Description:	this	function	excutes	the	main	logic	of	the	program
 *
 *	Return:	Always	0	(success)
 */

int	main(void)
{
	int	i	=	0;
	int	j	=	0;

	while	(i	<	10)
	{
		j	=	i	+	1;
		while	(j	<=	9)
		{
			putchar(i	+	'0');
			putchar(j	+	'0');
			if	(i	<	10	||	j	<=	9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return(0);
}



 
