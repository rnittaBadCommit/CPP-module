#ifndef FT_UTILS_HPP
# define FT_UTILS_HPP

# include <iostream>
# include <fstream>
# include <limits.h>


# define INVALID false
# define VALID true

typedef int t_err;

enum e_err
{
	NO_ERR,
	INVALID_NUM_ARG,
	EMPTY_FILE_NAME,
	CANT_OPEN_FILE,
	ERR_LAST
};

namespace ft
{
	//str
	int	stoi(std::string str);
	bool	is_number(const std::string str);
	void	replace(std::string &content, std::string s1, std::string s2);

	//file
	std::string	file_to_str(std::string file_name, t_err *err);
	int		str_to_file(std::string file_name, std::string content, t_err *err);
	void	str_to_file(std::string file_name, std::string content);

	//range
	bool	is_valid_range_char(const int ui);
	bool	is_valid_range_char(const unsigned int ui);
	bool	is_valid_range_int(const long int ul);
	bool	is_valid_range_int(const unsigned long int ul);

	class Exception : public std::exception
	{
		public:
			Exception(const e_err err);
			const char *what() const throw();

		private:
			e_err	err_;
	};
}

#endif
