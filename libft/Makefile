# Nom de la bibliothèque
NAME = libft.a
 
# Liste des fichiers source
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_memcpy.c \
		ft_atoi.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
		ft_strmapi.c ft_striteri.c ft_strjoin.c ft_strtrim.c ft_split.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Liste des fichiers objets générée dynamiquement
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Options de compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Cible par défaut : créer la bibliothèque sans bonus
all: $(NAME)

# Crée la bibliothèque (archive) à partir des fichiers objets
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\nArchived $(NAME)"

bonus: $(BONUS_OBJS) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "\nArchived $(NAME) with bonuses"

# Compile chaque fichier source en fichier objet
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
# Supprime les fichiers objets
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
  
# Supprime les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)
  
# Reconstruit tout à partir de zéro
re: fclean all
  
#those aren't to be interpreted as files, dem be RULES, boiiii
.PHONY: clean fclean re all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)