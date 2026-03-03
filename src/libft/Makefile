# Nombre de la librería
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I ../../includes

# Archivos fuente
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
      ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
      ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
      ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
      ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
      ft_putnbr_fd.c

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Regla por defecto
all: $(NAME)

# Crear la librería estática con ar
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "✅ $(NAME) creado correctamente!"

# Compilar cada .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los objetos
clean:
	rm -f $(OBJ)

# Limpiar todo (objetos + librería)
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all

