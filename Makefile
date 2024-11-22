CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_printf.a
HEADER	= ft_printf.h

SRCS    = ft_putstr.c ft_putchar.c ft_putnbr.c ft_printf.c ft_putnbr_hex.c\
 ft_putnbr_hex_upper.c ft_putnbr_unsigned.c ft_putpercent.c ft_putptr.c\

OBJS	= $(SRCS:.c=.o)

# BONUS_SRC = 


# BONUS_OBJS = ${BONUS_SRC:.c=.o}
%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: ${BONUS_OBJS}
	ar rcs ${NAME} ${BONUS_OBJS}

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus