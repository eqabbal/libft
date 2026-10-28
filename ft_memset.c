#include <stddef.h>
#include <stdio.h>
void *ft_memset(void *s,int c, size_t n)
{
size_t i;
unsigned char *ptr;
ptr = (unsigned char *)s;
i = 0;
while(i < n)
{
	ptr[i] = (unsigned char )c;
	i++;
}
return s;
}
int main ()
{
	char str[] = "hello";
	ft_memset(str,'A',3);
	printf("%s\n",str);
	return 0;
}


