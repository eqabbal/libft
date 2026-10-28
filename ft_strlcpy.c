#include<stddef.h>
#include<stdio.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t len;

    len = 0;
    while (src[len] != '\0')
        len++;

    i = 0;
    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return len;
}

int main()
{
	char src[] = "mehdi";
	char dest[4];
	size_t len;
	len = ft_strlcpy(dest,src,sizeof(dest));
        printf("%s\n",src);
	printf("%s\n",dest);
  	printf("%zu\n",len);
	return 0;
}	

