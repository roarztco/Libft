#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(1, &c, fd);
}