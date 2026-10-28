#include<stddef.h>
int ft_atoi(const char *str)
{
	int i;
	int s;
	int re;

	i = 0;
	s = 1;
	re = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			s = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		re = re * 10 +(str[i] - '0');
		i++;
	}
	return (re * s);
}

