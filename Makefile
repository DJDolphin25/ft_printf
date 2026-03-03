# Nombre de la librería
NAME = libftprintf.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes 

# Archivos fuente de libft que usa printf
LIBFT_SRC = src/libft/ft_atoi.c \
            src/libft/ft_bzero.c \
            src/libft/ft_calloc.c \
            src/libft/ft_isalnum.c \
            src/libft/ft_isalpha.c \
            src/libft/ft_isascii.c \
            src/libft/ft_isdigit.c \
            src/libft/ft_isprint.c \
			src/libft/ft_itoa.c \
            src/libft/ft_memchr.c \
            src/libft/ft_memcmp.c \
            src/libft/ft_memcpy.c \
            src/libft/ft_memmove.c \
            src/libft/ft_memset.c \
            src/libft/ft_strchr.c \
            src/libft/ft_strdup.c \
            src/libft/ft_strlcat.c \
            src/libft/ft_strlcpy.c \
            src/libft/ft_strlen.c \
            src/libft/ft_strncmp.c \
            src/libft/ft_strnstr.c \
            src/libft/ft_strrchr.c \
            src/libft/ft_tolower.c \
            src/libft/ft_toupper.c \
            src/libft/ft_substr.c \
            src/libft/ft_strjoin.c \
            src/libft/ft_strtrim.c \
            src/libft/ft_split.c \
            src/libft/ft_strmapi.c \
            src/libft/ft_striteri.c \
            src/libft/ft_putchar_fd.c \
            src/libft/ft_putstr_fd.c \
            src/libft/ft_putendl_fd.c \
            src/libft/ft_putnbr_fd.c

# Archivos fuente de printf
PRINTF_SRC = src/conversions/parser.c \
             src/conversions/print_char.c \
             src/conversions/print_decimal.c \
             src/conversions/print_string.c \
             src/conversions/print_unsigned_decimal.c \
             src/conversions/print_hex_lowercase.c \
             src/conversions/print_hex_uppercase.c \
             src/conversions/print_memory.c \

# Todos los sources
SRC = $(LIBFT_SRC) $(PRINTF_SRC)

# Archivos objeto
OBJ = $(SRC:.c=.o)

# PHONY rules
.PHONY: all clean fclean re test

# Regla por defecto
all: $(NAME)

# Crear librería estática auto-suficiente
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "✅ $(NAME) creado correctamente ✅"

# Compilar cada .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -f $(OBJ)

# Limpiar todo (objetos + librería)
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all

# Test linking todo en uno
test: $(NAME)
	$(CC) $(CFLAGS) testprintf.c $(NAME) -o test
	@echo "✅ Ejecutable de prueba creado ✅"