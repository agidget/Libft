#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = (char *)s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	return (res);
}
