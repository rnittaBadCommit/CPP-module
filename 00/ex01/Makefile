NAME=contact_list_management

SRCS=contact_list_management.cpp phonebook.cpp contact.cpp
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

