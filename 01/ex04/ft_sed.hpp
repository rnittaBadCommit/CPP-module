#ifndef FT_SED_HPP
# define FT_SED_HPP

# include <iostream>
# include <fstream>
# include "./utils/ft_utils.hpp"

# define INVALID false
# define VALID true

enum
{
	EMPTY_SRC_VALUE = ERR_LAST
};

bool	is_valid_args(int argc, char **argv, t_err *err);
int	ft_error(t_err err);
#endif