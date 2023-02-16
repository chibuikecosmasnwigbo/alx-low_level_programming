#include	<stdio.h>
/**
 * main	-	a	program	that	print	the	sizeof	the	 various	types	in	c	language
 *
 * return:	o	(success)
 */
int	main(void)
{
	char	a;
	int	b;
	long	int	c;
	long	long	int	d;
	float	f;
printf("size	of	a	char:	%lu bytes(s)\n",	(sizeof(a)));
printf("size	of	a	int:	%lu	bytes(s)\n",	(sizeof(b)));
printf("size	of	a	long	int:	%lu	bytes(s)\n",	(sizeof(c)));
printf("size	of	a	long	long	int:	%lu	bytes(s)\n",	(sizeof(d)));
printf("size	of	a	float:	%lu	byte(s)\n".	(sizeof(f)));
return	(0);
}
