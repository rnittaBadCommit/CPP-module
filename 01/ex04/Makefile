NAME=ft_sed

UTILS=ft_file_to_str.cpp ft_isnumber.cpp ft_replace.cpp ft_str_to_file.cpp
SRCS=main.cpp is_valid_args.cpp ft_error.cpp $(addprefix utils/,$(UTILS))
OBJS=$(SRCS:.cpp=.o)
CXX=c++
CXXFLAG=-Wall -Wextra -Werror -std=c++98 -pedantic -MMD

TEST_FILE=test_file
IGNORE_EXIT_STATUS = || :

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

test: $(NAME)
	$(RM) $(TEST_FILE)
	echo "abc aabc aaabc aaaabc" > $(TEST_FILE)
	./$(NAME) $(TEST_FILE) "aa" "00"
	cat $(TEST_FILE).replace
	@echo
	./$(NAME) $(TEST_FILE) "aa" ""
	cat $(TEST_FILE).replace
	@echo
	./$(NAME) $(TEST_FILE) "aa" "012345"
	cat $(TEST_FILE).replace
	@echo
	@echo "\n\n====Error case====\n"
	./$(NAME) "" aa 00 $(IGNORE_EXIT_STATUS)
	./$(NAME) "invalid_file_name" aa 00 $(IGNORE_EXIT_STATUS)
	./$(NAME) $(TEST_FILE) "" 00 $(IGNORE_EXIT_STATUS)
	./$(NAME) $(IGNORE_EXIT_STATUS)
	./$(NAME) too many args error $(IGNORE_EXIT_STATUS)

.PHONY: clean fclean re test

