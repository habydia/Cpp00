CC = g++
CFLAGS = -Wall -Wextra -Werror -Iinclude -std=c++98 -MMD -MP

SRC = src/commands.cpp \
	  src/phoneBook.cpp \
	  src/set_get.cpp \


HEADER = include/phoneBook.hpp

OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
NAME = PhoneBook

all: $(NAME)

-include $(OBJ_DIR)/*.d
$(NAME): $(OBJ_DIR) $(OBJ) 
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

force :
%.o: %.cpp $(HEADER) Makefile
	$(CC) $(CFLAGS) -O3 -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp Makefile | $(OBJ_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O3 -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
