#include<stddef.h>
char *ft_strnstr(const char *haystack, const char  * needle , size_t len)
{
       	size_t i;
	size_t j;
	if (needle[0] == '\0')
		return ((char *)haystack);
	i  = 0;		
	while (haystack[i] == '\0' && i < len )
		{
			j = 0;
			while (needle[j] != '\0' 
					&& i + j < len && haystack[i + j] == needle[j] )
			{
			j++;
			}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		}
	return NULL;
}
#include<stdio.h>
int main()
{
	char text[] = "1337 school marocco";
	char *result;
	result = ft_strnstr(text,"school",18);
	if (result != NULL)
		printf("%s\n",result);
	else 
		printf("not fonud\n");
	return 0;
}	


