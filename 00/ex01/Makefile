NAME=contact_list_management

UTILS=./utils/ft_isnumber.cpp ./utils/ft_stoi.cpp
SRCS=main.cpp PhoneBook.cpp Contact.cpp $(UTILS)
OBJS=$(SRCS:.cpp=.o)
CXX=c++
CXXFLAG=-Wall -Wextra -Werror -std=c++98 -pedantic -MMD

.cpp.o:
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean:
	$(RM)  $(OBJS)

fclean: clean
	$(RM)  $(NAME)

re: fclean $(NAME)

-include $(DEPS)

.PHONY: clean fclean re

