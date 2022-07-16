#include "ft_utils.hpp"


namespace ft
{
	
ft::Exception::Exception(e_err err) : err_(err)
{

}

e_err	ft::Exception::getErr()
{
	return (err_);
}

const char *ft::Exception::what() const throw()
{
	if (err_ == INVALID_NUM_ARG)
		return ("ft_utils: invalid number of args");
	else if (err_ == EMPTY_FILE_NAME)
		return ("ft_utils: file name can't be empty");
	else if (err_ == CANT_OPEN_FILE)
		return ("ft_utils: couldn't open file");
	else if (err_ == OVER_FLOW)
		return ("ft_utils: over flow");
	else
		return ("ft_utils: err for some reason");
}
	
} // namespace ft

