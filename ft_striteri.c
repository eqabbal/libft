#include<stdio.h>
#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	if(!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i,&s[i]);
		i++;
	}
}
void change_char(unsigned int i ,char *c)
{
	if(i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c= *c - 32;
}
int main()
{
	char s[] = "abcd";
	ft_striteri(s,change_char);
	printf("%s\n",s);
	return 0;
}
