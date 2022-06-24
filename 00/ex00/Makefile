NAME=megaphone

SRCS=megaphone.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=c++
CXXFLAG=-Wall -Wextra -Werror -std=c++98 -pedantic -MMD

.cpp.o:
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

-include $(DEPS)

.PHONY: clean fclean re

