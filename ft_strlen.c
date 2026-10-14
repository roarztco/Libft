#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(){
	const char P[] = " ";
	printf("%ld\n", ft_strlen(P));
}