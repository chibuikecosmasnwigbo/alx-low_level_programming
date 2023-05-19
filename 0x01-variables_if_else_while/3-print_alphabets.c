#include	<stdio.h>
/*
 *	main	-	A	program	that	print	the	alphabets	in	lower	and	upper	case
 *
 *	Return:	Always	0	(succsess)
 */
int	main(void)
{
	char	upper_a	=	'A';
	char	upper_z	=	'Z';
	char	ch	=	'a';
	char	ch_z	=	'z';
	while	(ch	<=	ch_z)
	{
		putchar(ch);
		ch++;
	}
	while	(upper_a	<=	upper_z)
	{
		putchar(upper_a);
		upper_a++;
	}
	putchar('\n');
	return	(0);
}

