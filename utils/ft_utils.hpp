#ifndef FT_UTILS_HPP
# define FT_UTILS_HPP

# include <iostream>
# include <fstream>
# include <limits.h>

typedef enum e_err
{
	NO_ERR,
	INVALID_NUM_ARG,
	EMPTY_FILE_NAME,
	EMPTY_SRC_VALUE,
	CANT_OPEN_FILE,
	ERR_LAST,
}	t_err;

namespace ft
{
	int	stoi(std::string str);
	bool	is_only_number(const std::string str);
	std::string	file_to_str(std::string file_name, t_err *err);
}

#endif
