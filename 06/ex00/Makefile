NAME=convert

UTILS=ft_is_valid_range_char.cpp ft_is_valid_range_int.cpp ft_is_valid_range_float.cpp \
		ft_is_int.cpp ft_is_float.cpp ft_is_double.cpp\
		ft_stoi.cpp\
		ft_Exception.cpp
SRCS=main.cpp TypeConversion.cpp $(addprefix utils/,$(UTILS))
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
	@valgrind ./$(NAME)

set_test:
	$(eval TEST := 1)

-include $(DEPS)

.PHONY: clean fclean re set_test

