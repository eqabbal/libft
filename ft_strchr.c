#include<stdio.h>
char *ft_strchr(const char *s,int c)
{
	while(*s)
	{
		if(*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char )c == '\0')
	       return ((char *)s);
return NULL;
}
int main()
{
	char str[] = "hello";
	char *re;
	re =  ft_strchr(str, 'l');
	if (re != NULL)
		printf("%s\n",re);
	else 
		printf("not found\n");
	return 0;
}
