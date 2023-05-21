#include	<stdio.h>
/*
 * main	-	Entry
 *
 * return:	Always	0	(success)
 *
 */
int	main(void)
{
	int	i;
	char	c;
	long	int	k;
	long	long	int	j;
	float	m;

	printf("size	of	a	char:	%c	bytes(s)\n",	(unsigned)sizeof(c));
	printf("size	of	an	int:	%u	bytes(s)\n",	(unsigned)sizeof(i));
	printf("size	of	a	long	int:	%lu	bytes(s)\n",		(unsigned)sizeof(k));
	printf("size	of	a	long	long	int:	%llu	bytes(s)\n",	(unsigned)sizeof(j));
	printf("size	of	a	float:	%f	bytes(s)\n",	(unsigned)sizeof(m));

