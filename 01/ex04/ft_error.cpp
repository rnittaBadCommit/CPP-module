#include "ft_sed.hpp"

int	ft_error_default(t_err err)
{
	if (err == INVALID_NUM_ARG)
		std::cout << "Error: invalid number of args" << std::endl;
	else if (err == EMPTY_FILE_NAME)
		std::cout << "Error: empty file name" << std::endl;
	else if (err == CANT_OPEN_FILE)
		std::cout << "Error: can't open file" << std::endl;
	else
		return (0);
	return (1);
}

int	ft_error(t_err err)
{
	if (ft_error_default(err))
		return (1);
	else if (err == EMPTY_SRC_VALUE)
		std::cout << "Error: empty 2nd arg" << std::endl;
	return (1);
}
