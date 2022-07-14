NAME=form

UTILS=./utils/ft_str_to_file.cpp ./utils/ft_Exception.cpp
SRCS=main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp $(UTILS)
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

