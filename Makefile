NAME = libft.a
 
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_memcpy.c \
		ft_atoi.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
		ft_strmapi.c ft_striteri.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\nArchived $(NAME)"

bonus: $(BONUS_OBJS) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "\nArchived $(NAME) with bonuses"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
  
fclean: clean
	rm -f $(NAME)
  
re: fclean all
  
.PHONY: clean fclean re all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)