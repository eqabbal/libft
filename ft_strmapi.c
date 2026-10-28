#include<stdlib.h>
#include<stddef.h>
size_t ft_strlen(char const *str);
char *ft_strmapi(char const *s,char  (*f)(unsigned int ,char))
{
	char *str;
	unsigned int i;
	if (!s || !f)
		return NULL;
	str = malloc(sizeof(char)*(ft_strlen(s) + 1));
	if (!str)
		return NULL;
	i = 0;
	while(s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}
char make_upper(unsigned int i, char c)
{
	(void)i;
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}
#include<stdio.h>
int main()
{
	char *str;
	str = ft_strmapi("hello",make_upper);
	if(!str)
		return 1;
	printf("%s\n",str);
	free(str);
	return 0;
}

