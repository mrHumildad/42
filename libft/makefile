CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a 
FUNC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c
OFILES = $(FUNC: .c = .o)

all : $(NAME)

$(NAME) : $(FUNC)
	ar rcs $(NAME) $(FUNC)

clean:
	rm $(OFILES)
