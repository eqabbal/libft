#include "libft.h"
#include<unistd.h>
static void ft_putnbr_recursive(long long n ,int fd)
{
	char c;
	if( n >= 10)
		ft_putnbr_recursive(n / 10,fd);
	c = (n % 10) + '0';
	write(fd,&c,1);
}
void ft_putnbr_fd(int n, int fd)
{
	long long nb;
	 nb = n;
	 if(nb < 0)
	 {
		 write(fd ,"-",1);
		 nb = -nb;
	 }
	 ft_putnbr_recursive(nb , fd);
}
