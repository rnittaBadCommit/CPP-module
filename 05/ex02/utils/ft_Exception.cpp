#include "ft_utils.hpp"

const char *ft::Exception::what(e_err err) const throw()
{
	if (err == INVALID_NUM_ARG)
		return ("ft_utils: invalid number of args");
	else if (err == EMPTY_FILE_NAME)
		return ("ft_utils: file name can't be empty");
	else if (err == CANT_OPEN_FILE)
		return ("ft_utils: couldn't open file");
	else
		return ("ft_utils: err for some reason");
}
