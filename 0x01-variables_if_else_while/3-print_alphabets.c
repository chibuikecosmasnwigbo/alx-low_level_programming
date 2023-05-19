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
	while	(ch	<=	ch_z	&&	upper_a	<=	upper_z)
	{
		putchar(ch);
		ch++;
		putchar(upper_a);
		upper_a++;
	}
	return	(0);
}

