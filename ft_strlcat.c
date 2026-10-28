#include<stddef.h>
#include<stdio.h>
size_t ft_strlcat(char *dest,const char *src,size_t size)
{
size_t i;
size_t j;
size_t src_len;
 i = 0;
 j = 0;
 while (i < size && dest[i] != '\0')
	 i++;
 src_len = 0;
 while(src[src_len] != '\0')
	 src_len++;
 if(i == size )
	 return (size + src_len);
 while (src[j] != '\0' && i + j < size - 1)
 {
	 dest[i + j] = src[j];
	 j++;
 }
 dest[i + j] = '\0';
 return (i  + src_len);
}
int main()
{
	char dest [20] = "hello ";
	char src [] = "mehdi";
	size_t len;
	len =  ft_strlcat(dest, src,  sizeof (dest));
	printf ("%s\n" ,dest);
	printf("%zu\n",len);
	return 0;
}

