#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] != (unsigned char)c)
			i++;
		else
			return ((char *)str + i);
	}
	return (NULL);
}
