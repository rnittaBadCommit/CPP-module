#ifndef FT_UTILS_HPP
# define FT_UTILS_HPP

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

#endif
