NAME	= libftprintf.a
CC		= cc
CCLFAGS	= -Wall -Wextra -Werror -g3
LIBS	= libft/libft.a
INCLDS	= libft
SRCS	= ft_printf.c print_char.c print_str.c print_hexa.c print_int.c print_base.c print_unsigned_int.c
OBJS	= ${SRCS:.c=.o}

${NAME}: ${OBJS} libft.a
	cp libft/libft.a ./${NAME}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

libft.a: libft/Makefile
	make -C libft

%.o: %.c
	${CC} ${CCLFAGS} -c $< -o $@ -I ${INCLDS}

relib:
	make re -C libft

cleanlib:
	make clean -C libft

fcleanlib:
	make fclean -C libft

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME} ${LIBS}

test: ${NAME} test.c
	cc test.c ${NAME} -I ${INCLDS} -g3

.PHONY: clean fclean re
