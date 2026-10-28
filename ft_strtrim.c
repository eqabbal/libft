#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
static int is_in_set(char c,char const *set)
{
	int i;
	i = 0;
	while (set[i])
	{
	       if(set[i] == c)
		       return 1;
	       i++;
	}
	return 0;
}
char *ft_strtrim(char const *s1,char const *set)
{
	char *str;
	size_t start;
	size_t end;
	size_t i;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[end])
		end++;
	while(s1[start] && is_in_set(s1[start],set))
		start++;
	while(end > start && is_in_set(s1[end - 1],set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return NULL;
	i = 0;
	while (start < end )
		str[i++] = s1[start++];
	str[i] = '\0';
	return str;
}
int main()
{
	char *re;
	re = ft_strtrim("xxxhello worldxx","x");
	if(re)
	{
		printf("%s\n",re);
		free(re);
	}
	return 0;
}


