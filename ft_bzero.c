#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = '\0';
		i++;
	}
}

int main(void)
{
	unsigned char pt[] = "rayane";

	ft_bzero(pt, 0);
	printf("%s\n", pt);
	return (0);
}