SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_toupper.c ft_tolower.c

FLAGS = -Wall -Wextra -Werror

CC = cc

GDB = -g

P_NAME = ./a.out

ap:
	$(CC) $(SOURCES)
	$(P_NAME)

db: 
	$(CC) $(GDB) $(SOURCES) 	
	gdbtui $(P_NAME)

