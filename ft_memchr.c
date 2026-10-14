#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*pt;

	pt = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pt[i] == (unsigned char)c)
			return ((void *)&pt[i]);
		i++;
	}
	return (NULL);
}

int main(){
	char *p = ft_memchr("rayane", 'y', 6);

	printf("%s\n", *p);
}