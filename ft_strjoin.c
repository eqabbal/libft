#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
char *ft_strjoin( char const *s1,char const *s2)
{
	char *str;
	size_t i;
	size_t j;
	if (!s1 || !s2)
		return NULL;
	i  = 0;
	j  = 0;
	str =  malloc (i + j + 1);
	if (!str)
		return NULL;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] =  s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return str;
}
int main()
{
	char *re;
	re =  ft_strjoin("hello","mehdi");
	if (re)
	{
		printf("%s\n",re);
		free(re);
	}
	return 0;
}
