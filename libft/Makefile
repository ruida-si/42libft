SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c

FLAGS = -Wall -Wextra -Werror

CC = cc

OBJ = $(SOURCES:.c=.o)

NAME = libft.a

GDB = -g

P_NAME = ./a.out

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SOURCES)
	ar -rcs $(NAME) $(OBJ)

ap:
	$(CC) $(FLAGS) $(SOURCES)
	$(P_NAME)

db: 
	$(CC) $(GDB) $(SOURCES) 	
	gdbtui $(P_NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all ap db clean fclean re

