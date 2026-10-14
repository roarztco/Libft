#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return 1;
    else
        return 0;
}

int main(){
    printf("%d\n", ft_isalnum('M'));
}