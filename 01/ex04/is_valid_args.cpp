#include "ft_sed.hpp"

static bool	is_valid_num_arg_(int argc)
{
	return (argc == 4);
}

static bool	is_valid_fileName_(char *file_name)
{
	if (file_name[0] == '\0')
		return (INVALID);
	else
		return (VALID);
}

static bool	is_valid_src_(char *sed_src)
{
	if (sed_src[0] == '\0')
		return (INVALID);
	else
		return (VALID);
}

bool is_valid_args(int argc, char **argv, t_err *err)
{
	if (is_valid_num_arg_(argc) == INVALID)
	{
		*err = INVALID_NUM_ARG;
		return (INVALID);
	}
	if (is_valid_fileName_(argv[1]) == INVALID)
	{
		*err = EMPTY_FILE_NAME;
		return (INVALID);
	}
	if (is_valid_src_(argv[2]) == INVALID)
	{
		*err = EMPTY_SRC_VALUE;
		return (INVALID);
	}
	return (VALID);
}
