NAME=form

SRCS=main.cpp Bureaucrat.cpp Form.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=$(SRCS:.cpp=.d)
CXX=c++
CXXFLAG=-g -Wall -Wextra -Werror -std=c++98 -pedantic -MMD

.cpp.o:
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(SRCS:.cpp=.d)

fclean: clean
	$(RM)  $(NAME)

re: fclean $(NAME)

-include $(DEPS)

.PHONY: clean fclean re

