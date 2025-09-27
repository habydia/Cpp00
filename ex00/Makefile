
CC = g++
CFLAGS = -Wall -Wextra -Werror -Iinclude -std=98
SRC = src/meghaphone.cpp

OBJDIR = obj
OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))
NAME = meghaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: src/%.c Makefile
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
