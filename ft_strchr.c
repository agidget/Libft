#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i++;
	}
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
