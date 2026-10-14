#include "libft.h"
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main(){
	char c;
	c = ft_toupper('m');
	
}