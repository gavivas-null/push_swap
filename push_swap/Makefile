NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
#CFLAGS += -fsanitize=address

SRCS =	src/push_swap.c \
		src/utils/list_stack.c \
		src/utils/utils_lst.c \
		src/moves/push.c \
		src/moves/reverse_rotate.c \
		src/moves/rotate.c \
		src/moves/swap.c \
		src/parsing/assign_index.c \
		src/parsing/build_stack.c \
		src/parsing/duplicates.c \
		src/parsing/parse_args.c \
		src/parsing/sorted.c \
		src/parsing/validate.c \
		src/sort/sort_two.c \
		src/sort/sort_three.c \
		src/sort/sort_five.c \
		src/sort/sort_ksort.c

OBJS = $(SRCS:.c=.o)
INCLUDES = -I include -I Libft
LIBFT = Libft/libft.a

# --------------------------------------------------------------
# 👇 Regla principal
# --------------------------------------------------------------
all: $(NAME)

$(NAME):	$(OBJS)
			@$(MAKE) -C Libft > /dev/null
			@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIBFT) -o $(NAME)
			@echo "✅ Proyecto compilado correctamente."

# --------------------------------------------------------------
# 🛠 Compilar cada archivo fuente
# --------------------------------------------------------------
%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ > /dev/null
	@echo "🔧 Compilado: $<"

# --------------------------------------------------------------
# 🧹 Limpieza
# --------------------------------------------------------------

clean:
	@rm -f $(OBJS) > /dev/null
	@$(MAKE) -C Libft clean > /dev/null
	@echo "🧹 Archivos objeto y temporales eliminados."

fclean: clean
	@rm -f $(NAME) > /dev/null
	@$(MAKE) -C Libft fclean > /dev/null
	@echo "🧼 Todo limpio: binarios y Libft."

re: fclean all

.PHONY: all clean fclean re libft
