NAME=hazard

SRCS=main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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

