NAME	= libftprintf.a
CC		= cc
CCLFAGS	= -Wall -Wextra -Werror -g3
LIBS	= libft/libft.a
INCLDS	= libft
SRCS	= ft_printf.c print_char.c print_str.c print_hexa.c
OBJS	= ${SRCS:.c=.o}

${NAME}: ${OBJS} libft
	cp libft/libft.a ./${NAME}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

libft: libft/Makefile
	make -C libft

%.o: %.c
	${CC} ${CCLFAGS} -c $< -o $@ -I ${INCLDS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME} ${LIBS}

test: ${NAME} test.c
	cc test.c ${NAME} -I ${INCLDS} -g3

.PHONY: clean fclean re
