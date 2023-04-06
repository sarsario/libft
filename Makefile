LIBC_DIR = Libc
STRING_MANIP = String\ Manipulation
SRCS = $(wildcard \
	$(addsuffix /*.c,$(LIBC_DIR)) \
	$(addsuffix /*.c,$(STRING_MANIP)) \
)
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))
NAME = libft.a

AR = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror

vpath %.c $(LIBC_DIR) $(STRING_MANIP)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re