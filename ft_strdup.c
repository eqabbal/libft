#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
