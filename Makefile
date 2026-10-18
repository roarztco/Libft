
NAME = libft.a		//clear

CC = cc		//clear
CFLAGS = -Wall -Wextra -Werror //clear

AR = ar		//clear
ARFLAGS = rcs		//clear

SRCS = ft_isalpha.c		//clear
OBJS = $(SRCS:.c=.o)	//clear

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
