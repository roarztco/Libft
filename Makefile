
NAME = libft.a		//clear

CC = cc		//clear
CFLAGS = -Wall -Wextra -Werror //clear

AR = ar		//not clear
ARFLAGS = rcs		//not clear

SRCS = ft_isalpha.c		//clear
OBJS = $(SRCS:.c=.o)	//not clear yet

all: $(NAME)		//not clear yet

$(NAME): $(OBJS)		 //not clear yet
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)  //ncy

%.o: %.c libft.h		//c
	$(CC) $(CFLAGS) -c $< -o $@		//nc

clean:			//nc*
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
