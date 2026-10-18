
NAME = libft.a		//clear

CC = cc		//clear
CFLAGS = -Wall -Wextra -Werror //clear

AR = ar		//clear
ARFLAGS = rcs		//clear

SRCS = ft_isalpha.c		//clear
OBJS = $(SRCS:.c=.o)	//clear

all: $(NAME)		//not clear yet

$(NAME): $(OBJS)		 //clear
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)  //clear

%.o: %.c libft.h		//c
	$(CC) $(CFLAGS) -c $< -o $@		//nc

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
