LIBC_DIR = Libc
STRING_MANIP = String\ Manipulation
OBJ_DIR = obj
TESTS_DIR = Tests

SRCS = $(wildcard \
	$(addsuffix /*.c,$(LIBC_DIR)) \
	$(addsuffix /*.c,$(STRING_MANIP)) \
)
TEST_SRCS = $(wildcard $(addsuffix /*.c,$(TESTS_DIR)))
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))
TEST_OBJS = $(TEST_SRCS:%.c=obj/%.o)
NAME = libft.a
TEST_NAME = libft_test
TEST_FILE = ft_atoi.c

AR = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror

vpath %.c $(LIBC_DIR) $(STRING_MANIP) $(TESTS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test_%:
	$(MAKE) $(TEST_NAME) TEST_FILE=$*.c -C $(CURDIR)

$(TEST_NAME): $(TEST_OBJS) $(NAME)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/$(TESTS_DIR)/%.o: $(TESTS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TEST_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test_%