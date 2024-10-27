NAME = libft.a
LIB = ar -rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CXXFLAGS = $(CFLAGS)
DEBUG_FLAGS = -g -DDEBUG
RELEASE_FLAGS = -O2 -DNDEBUG
SRC = ft_character.c ft_string.c ft_memory.c ft_memory_two.c ft_string_manipulation.c ft_conversion.c ft_memory_management.c ft_string_creation.c ft_string_creation_split.c ft_string_transformation.c ft_io_functions.c
RM = rm -f
OBJ = $(SRC:.c=.o)

debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: $(NAME)

release: CXXFLAGS += $(RELEASE_FLAGS)
release: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

.PHONY: all debug release clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

