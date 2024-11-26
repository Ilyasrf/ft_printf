NAME	=  libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS    = ft_putstr.c ft_putchar.c ft_putnbr.c ft_printf.c ft_putnbr_hex.c\
 ft_putnbr_hex_upper.c ft_putnbr_unsigned.c ft_putpercent.c ft_putptr.c\

BONUS_SRC = bonus/ft_putstr_bonus.c bonus/ft_putchar_bonus.c bonus/ft_putnbr_bonus.c bonus/ft_printf_bonus.c \
 bonus/ft_putnbr_hex_bonus.c bonus/ft_putnbr_hex_upper_bonus.c\
 bonus/ft_putnbr_unsigned_bonus.c bonus/ft_putpercent_bonus.c bonus/ft_putptr_bonus.c\

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus