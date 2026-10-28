#include<stddef.h>
#include<stdio.h>
void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	size_t i;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
	ptr[i] = 0;
	i++;
	}
}
int main()
{
	char arr[] = "mehdi";
	ft_bzero(arr,3);
	printf("%s\n",arr);
	return 0;
}

