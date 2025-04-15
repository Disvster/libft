SRCS = ft_atoi.c ft_strjoin.c ft_strdup.c ft_isalpha.c ft_strnstr.c ft_itoa.c ft_isdigit.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_strtrim.c ft_memcpy.c ft_isprint.c ft_memset.c ft_calloc.c ft_substr.c ft_strncmp.c ft_strrchr.c ft_strlcat.c ft_memmove.c ft_split.c ft_bzero.c ft_tolower.c ft_strlcpy.c 
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
ARRCS = ar rcs
RM = rm -f

.c.o:
	$(CC) $(CFLAGS) $<

$(NAME): $(OBJS)
	$(ARRCS) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
