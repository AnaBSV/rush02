NAME = rush02

LIB = rush02

SRCS =	get_dict_info.c	\
		find_in_dict.c	\
		utils_libft.c	\
		print_number.c	\
		set_list.c		\
		rush02.c		\

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS} -L ${LIB}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean