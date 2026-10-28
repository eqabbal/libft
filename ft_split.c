
#include<stdlib.h>
static int count_word(char const *s,char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] == c && s[i])
			i++;
	if(s[i] && s[i] != c)
	{
		count++;
		while(s[i] && s[i] != c)
		i++;
	}
	}
return count;
}
static char *get_word(char const *s,int start,int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	       word[i++] = s[start++];
word[i] = '\0';
return word;
}
static void free_word(char **re, int count)
{
	int i;
	i = 0;
	while (i < count)
	{
		free(re[i]);
		i++;
	}
	free (re);
}
char **ft_split(char const *s, char c)
{
	char  **re;
	int i;
	int start;
	int word;
	if (!s)
		return NULL;
	word = count_word(s,c);
	re = malloc(sizeof(char *) * (word + 1));
       if (!re)
       return NULL;
i = 0;
start = 0;
while(s[start])
{
	while(s[start] == c && s[start])
		start++;
	if(s[start]  && s[start] != c)
	{
		i = start;
		while (s[i] && s[i] != c)
			i++;
	re[word - count_word(s + i,c)] = get_word(s,start, i);
if (!re[word - count_word(s + i,c)])
{
free_word(re, word - count_word(s + i, c));
return NULL;
}
start = i;
}
}
re[word] = NULL;
return re;
}
