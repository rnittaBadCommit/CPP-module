NAME=contact_list_management

UTILS=./utils/ft_isnumber.cpp ./utils/ft_stoi.cpp
SRCS=main.cpp phonebook.cpp contact.cpp $(UTILS)
OBJS=$(SRCS:.cpp=.o)
CC=c++
CFLAG=-Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re

