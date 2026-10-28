#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
char *ft_substr(char const *s,unsigned int start,size_t len)
{
	char *sub;
	size_t i;
	size_t slen;
	if (!s)
		return NULL;
       slen = 0;
while (s[slen])
  slen++;
if (start >= slen)
	len = 0;
else if (len > slen - start)
	len = slen - start;
sub = malloc(sizeof (char ) * (len + 1));
if (!sub)
	return NULL;
i = 0;
while (i < len )
{
	sub[i] = s[start + i];
	i++;
}
sub[i] = '\0';
return sub;
}
int main()
{
	char *re;
	re = ft_substr("hello world",6,5);
	printf("%s\n",re);
	free(re);
	return 0;
}
