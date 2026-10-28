#include<stdlib.h>
static int count_digits(long n)
{
	int count;
	count  = 0;
	if ( n <= 0)
		count++;
	while(n != 0)
	{
		n = n / 10;
	       count++;
	}
return count;
}
char *ft_itoa(int n)
{
	char *str;
	long nb;
	int len;
	nb = n;
	len = count_digits(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
	str[len] = '\0';
	if ( nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if( nb == 0)
		str[0] = '0';
	while ( nb > 0)
	{
		str[-- len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return str ;
}

