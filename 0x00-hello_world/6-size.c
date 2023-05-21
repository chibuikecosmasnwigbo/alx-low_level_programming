#include	<stdio.h>
/*
 * main	-	Entry
 *
 * return:	Always	0	(success)
 *
 */
int	main(void)
{
	char	a;
	int	b;
	long	int	c;
	long	long	int	d;
	float	f;

	printf("size	of	a	char:	%lu	bytes(s)\n",	(unsigned)sizeof(a));
	printf("size	of	an	int:	%lu	bytes(s)\n",	(unsigned)sizeof(b));
	printf("size	of	a	long	int:	%lu	bytes(s)\n",		(unsigned)sizeof(c));
	printf("size	of	a	long	long	int:	%lu	bytes(s)\n",	(unsigned)sizeof(d));
	printf("size	of	a	float:	%lu	bytes(s)\n",	(unsigned)sizeo(f));

