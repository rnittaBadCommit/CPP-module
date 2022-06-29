NAME=hazard

SRCS=main.cpp Zombie.cpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=$(SRCS:.cpp=.d)
CXX=c++
CXXFLAG=-Wall -Wextra -Werror -std=c++98 -pedantic -MMD

.cpp.o:
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean:
	$(RM)  $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM)  $(NAME)

re: fclean $(NAME)

-include $(DEPS)

.PHONY: clean fclean re
