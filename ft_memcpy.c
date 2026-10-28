#include <stddef.h>
#include<stdio.h>
void *ft_memcpy(void *dest,const void *src,size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;
	d = (unsigned char *)dest;
	s = ( const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}
int main ()
{
	char arr[] = "mehdi";
	char arr1[6];
	ft_memcpy(arr1,arr,6);
	printf("%s\n",arr1);
	return 0;
}

