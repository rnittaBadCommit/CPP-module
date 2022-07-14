NAME=form

UTILS=./utils/ft_str_to_file.cpp ./utils/ft_Exception.cpp
SRCS=main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp $(UTILS)
OBJS=$(SRCS:.cpp=.o)
DEPS=$(SRCS:.cpp=.d)
TEST=0
CXX=c++
CXXFLAG=-g -D TEST=$(TEST) -Wall -Wextra -Werror -std=c++98 -pedantic -MMD


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

test: fclean set_test $(NAME)
	@echo
	@echo
	@echo "TEST START"
	@echo
	@echo
	@./$(NAME)

set_test:
	$(eval TEST := 1)

-include $(DEPS)

.PHONY: clean fclean re set_test

